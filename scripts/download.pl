#!/usr/bin/env perl
# 
# Copyright (C) 2006 OpenWrt.org
# Copyright (C) 2016 LEDE project
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

use strict;
use warnings;
use File::Basename;
use File::Copy;

@ARGV > 2 or die "Syntax: $0 <target dir> <filename> <hash> <url filename> [<mirror> ...]\n";

my $url_filename;
my $target = shift @ARGV;
my $filename = shift @ARGV;
my $file_hash = shift @ARGV;
$url_filename = shift @ARGV unless $ARGV[0] =~ /:\/\//;
my $scriptdir = dirname($0);
my @mirrors;
my $ok;

$url_filename or $url_filename = $filename;

sub localmirrors {
	my @mlist;
	open LM, "$scriptdir/localmirrors" and do {
	    while (<LM>) {
			chomp $_;
			push @mlist, $_ if $_;
		}
		close LM;
	};
	open CONFIG, "<".$ENV{'TOPDIR'}."/.config" and do {
		while (<CONFIG>) {
			/^CONFIG_LOCALMIRROR="(.+)"/ and do {
				chomp;
				my @local_mirrors = split(/;/, $1);
				push @mlist, @local_mirrors;
			};
		}
		close CONFIG;
	};

	my $mirror = $ENV{'DOWNLOAD_MIRROR'};
	$mirror and push @mlist, split(/;/, $mirror);

	return @mlist;
}

sub which($) {
	my $prog = shift;
	my $res = `which $prog`;
	$res or return undef;
	$res =~ /^no / and return undef;
	$res =~ /not found/ and return undef;
	return $res;
}

sub hash_cmd() {
	my $len = length($file_hash);
	my $cmd;

	$len == 64 and return "openssl dgst -sha256 | sed -e 's,.*= ,,'";
	$len == 32 and do {
		my $cmd = which("md5sum") || which("md5") || die 'no md5 checksum program found, please install md5 or md5sum';
		chomp $cmd;
		return $cmd;
	};
	return undef;
}

my $hash_cmd = hash_cmd();

sub download
{
	my $mirror = shift;
	my $options = $ENV{WGET_OPTIONS} || "";

	$mirror =~ s!/$!!;

	if ($mirror =~ s!^file://!!) {
		if (! -d "$mirror") {
			print STDERR "Wrong local cache directory -$mirror-.\n";
			cleanup();
			return;
		}

		if (! -d "$target") {
			system("mkdir", "-p", "$target/");
		}

		if (! open TMPDLS, "find $mirror -follow -name $filename 2>/dev/null |") {
			print("Failed to search for $filename in $mirror\n");
			return;
		}

		my $link;

		while (defined(my $line = readline TMPDLS)) {
			chomp ($link = $line);
			if ($. > 1) {
				print("$. or more instances of $filename in $mirror found . Only one instance allowed.\n");
				return;
			}
		}

		close TMPDLS;

		if (! $link) {
			print("No instances of $filename found in $mirror.\n");
			return;
		}

		print("Copying $filename from $link\n");
		copy($link, "$target/$filename.dl");

		$hash_cmd and do {
			if (system("cat '$target/$filename.dl' | $hash_cmd > '$target/$filename.hash'")) {
				print("Failed to generate hash for $filename\n");
				return;
			}
		};
	} else {
		open WGET, "wget -t5 --timeout=20 --no-check-certificate $options -O- '$mirror/$url_filename' |" or die "Cannot launch wget.\n";
		$hash_cmd and do {
			open MD5SUM, "| $hash_cmd > '$target/$filename.hash'" or die "Cannot launch $hash_cmd.\n";
		};
		open OUTPUT, "> $target/$filename.dl" or die "Cannot create file $target/$filename.dl: $!\n";
		my $buffer;
		while (read WGET, $buffer, 1048576) {
			$hash_cmd and print MD5SUM $buffer;
			print OUTPUT $buffer;
		}
		$hash_cmd and close MD5SUM;
		close WGET;
		close OUTPUT;

		if ($? >> 8) {
			print STDERR "Download failed.\n";
			cleanup();
			return;
		}
	}

	$hash_cmd and do {
		my $sum = `cat "$target/$filename.hash"`;
		$sum =~ /^(\w+)\s*/ or die "Could not generate file hash\n";
		$sum = $1;

		if ($sum ne $file_hash) {
			print STDERR "MD5 sum of the downloaded file does not match (file: $sum, requested: $file_hash) - deleting download.\n";
			cleanup();
			return;
		}
	};

	unlink "$target/$filename";
	system("mv", "$target/$filename.dl", "$target/$filename");
	cleanup();
}

sub cleanup
{
	unlink "$target/$filename.dl";
	unlink "$target/$filename.hash";
}

@mirrors = localmirrors();

foreach my $mirror (@ARGV) {
	if ($mirror =~ /^\@SF\/(.+)$/) {
		# give sourceforge a few more tries, because it redirects to different mirrors
		for (1 .. 5) {
			push @mirrors, "http://downloads.sourceforge.net/$1";
		}
	} elsif ($mirror =~ /^\@APACHE\/(.+)$/) {
		push @mirrors, "https://mirror.netcologne.de/apache.org/$1";
		push @mirrors, "https://mirror.aarnet.edu.au/pub/apache/$1";
		push @mirrors, "http://mirror.cogentco.com/pub/apache/$1";
		push @mirrors, "http://mirror.csclub.uwaterloo.ca/apache/$1";
		push @mirrors, "http://mirror.navercorp.com/apache/$1";
		push @mirrors, "http://ftp.jaist.ac.jp/pub/apache/$1";
		push @mirrors, "ftp://apache.cs.utah.edu/apache.org/$1";
		push @mirrors, "ftp://apache.mirrors.ovh.net/ftp.apache.org/dist/$1";
	} elsif ($mirror =~ /^\@GITHUB\/(.+)$/) {
		# give github a few more tries (different mirrors)
		for (1 .. 5) {
			push @mirrors, "https://raw.githubusercontent.com/$1";
		}
	} elsif ($mirror =~ /^\@GNU\/(.+)$/) {
		push @mirrors, "http://mirrors.ustc.edu.cn/gnu/$1";
		push @mirrors, "https://mirrors.rit.edu/gnu/$1";
		push @mirrors, "https://mirror.netcologne.de/gnu/$1";
		push @mirrors, "http://ftp.kddilabs.jp/GNU/gnu/$1";
		push @mirrors, "http://www.nic.funet.fi/pub/gnu/gnu/$1";
		push @mirrors, "http://mirror.internode.on.net/pub/gnu/$1";
		push @mirrors, "http://mirror.navercorp.com/gnu/$1";
		push @mirrors, "ftp://mirror.csclub.uwaterloo.ca/gnu/$1";
		push @mirrors, "ftp://download.xs4all.nl/pub/gnu/";
	} elsif ($mirror =~ /^\@SAVANNAH\/(.+)$/) {
		push @mirrors, "https://mirror.netcologne.de/savannah/$1";
		push @mirrors, "http://mirror.csclub.uwaterloo.ca/nongnu/$1";
		push @mirrors, "http://ftp.acc.umu.se/mirror/gnu.org/savannah/$1";
		push @mirrors, "http://nongnu.uib.no/$1";
		push @mirrors, "http://ftp.igh.cnrs.fr/pub/nongnu/$1";
		push @mirrors, "http://public.p-knowledge.co.jp/Savannah-nongnu-mirror/$1";
		push @mirrors, "ftp://cdimage.debian.org/mirror/gnu.org/savannah/$1";
		push @mirrors, "ftp://ftp.acc.umu.se/mirror/gnu.org/savannah/$1";
	} elsif ($mirror =~ /^\@KERNEL\/(.+)$/) {
		my @extra = ( $1 );
		if ($filename =~ /linux-\d+\.\d+(?:\.\d+)?-rc/) {
			push @extra, "$extra[0]/testing";
		} elsif ($filename =~ /linux-(\d+\.\d+(?:\.\d+)?)/) {
			push @extra, "$extra[0]/longterm/v$1";
		}		
		foreach my $dir (@extra) {
			push @mirrors, "http://mirrors.aliyun.com/linux-kernel/$dir";
			push @mirrors, "https://mirrors.tuna.tsinghua.edu.cn/kernel/$dir";
			push @mirrors, "http://mirrors.163.com/kernel/$dir";
			push @mirrors, "http://mirrors.ustc.edu.cn/kernel.org/$dir";
			push @mirrors, "https://cdn.kernel.org/pub/$dir";
			push @mirrors, "https://mirror.rackspace.com/kernel.org/$dir";
			push @mirrors, "http://download.xs4all.nl/ftp.kernel.org/pub/$dir";
			push @mirrors, "http://mirrors.mit.edu/kernel/$dir";
			push @mirrors, "http://ftp.nara.wide.ad.jp/pub/kernel.org/$dir";
			push @mirrors, "http://www.ring.gr.jp/archives/linux/kernel.org/$dir";
			push @mirrors, "ftp://ftp.riken.jp/Linux/kernel.org/$dir";
			push @mirrors, "ftp://www.mirrorservice.org/sites/ftp.kernel.org/pub/$dir";
		}
    } elsif ($mirror =~ /^\@GNOME\/(.+)$/) {
		push @mirrors, "http://mirror.csclub.uwaterloo.ca/gnome/sources/$1";
		push @mirrors, "http://ftp.acc.umu.se/pub/GNOME/sources/$1";
		push @mirrors, "http://ftp.kaist.ac.kr/gnome/sources/$1";
		push @mirrors, "http://www.mirrorservice.org/sites/ftp.gnome.org/pub/GNOME/sources/$1";
		push @mirrors, "http://mirror.internode.on.net/pub/gnome/sources/$1";
		push @mirrors, "http://ftp.belnet.be/ftp.gnome.org/sources/$1";
		push @mirrors, "ftp://ftp.cse.buffalo.edu/pub/Gnome/sources/$1";
		push @mirrors, "ftp://ftp.nara.wide.ad.jp/pub/X11/GNOME/sources/$1";
    }
    else {
		push @mirrors, $mirror;
	}
}

#push @mirrors, 'http://mirror1.openwrt.org';
push @mirrors, 'http://downloads.pangubox.com/sources';
push @mirrors, 'http://sources.lede-project.org';
push @mirrors, 'http://mirror2.openwrt.org/sources';
push @mirrors, 'http://downloads.openwrt.org/sources';

while (!$ok) {
	my $mirror = shift @mirrors;
	$mirror or die "No more mirrors to try - giving up.\n";

	download($mirror);
	-f "$target/$filename" and $ok = 1;
}

$SIG{INT} = \&cleanup;

