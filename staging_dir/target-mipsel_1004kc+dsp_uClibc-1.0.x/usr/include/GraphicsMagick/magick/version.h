/*
  Copyright (C) 2003 - 2010 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
  Copyright 1991-1999 E. I. du Pont de Nemours and Company
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  GraphicsMagick version and copyright.
*/
#ifndef _MAGICK_VERSION_H
#define _MAGICK_VERSION_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  Define declarations.

  MagickLibVersion and MagickLibVersionNumber are defined differently
  than they are in ImageMagick. The three fields are based on library
  interface versioning.  Each field in MagickLibVersion is one byte.
  The most significant field (third byte from the right) defines the
  library major interface, which is incremented whenever the library
  ABI changes incompatibly with preceding versions. The second field
  identifies an interface (a span) in a series of upward-compatible
  interfaces with the same major interface (such as when only new
  functions have) been added. The least significant field specifies
  the revision across 100% compatible interfaces.

  MagickLibVersionText provides a simple human-readable string for
  identifying the release.
*/
#define MagickPackageName "GraphicsMagick"
#define MagickCopyright  "Copyright (C) 2002-2010 GraphicsMagick Group.\nAdditional copyrights and licenses apply to this software.\nSee http://www.GraphicsMagick.org/www/Copyright.html for details."
#define MagickLibVersion  0x060300
#define MagickLibVersionText  "1.3.8"
#define MagickLibVersionNumber 6,3,0
#define MagickChangeDate   "20100121"
#define MagickReleaseDate  "2010-01-21"
	
/*
  The MagickLibInterfaceNewest and MagickLibInterfaceOldest defines
  provide both the newest and oldest interfaces supported by the
  library.  The 'newest' interface is incremented if new interfaces
  are added to the library.  The 'oldest' interface is reset to the
  value of 'newest' if an existing interface is changed incompatibly,
  or an interface is removed.  This scheme is similar to that used by
  ELF libraries.

  Note that the values used are related to those in
  MagickLibVersionNumber, but these are broken out and simplified so
  that they can be easily used in C pre-processor logic.
*/
#define MagickLibInterfaceNewest 6
#define MagickLibInterfaceOldest 3

#if (QuantumDepth == 8)
#define MagickQuantumDepth  "Q8"
#elif (QuantumDepth == 16)
#define MagickQuantumDepth  "Q16"
#elif (QuantumDepth == 32)
#define MagickQuantumDepth  "Q32"
#else
# error Unsupported quantum depth.
#endif

#define MagickVersion MagickPackageName " " MagickLibVersionText " " \
  MagickReleaseDate " " MagickQuantumDepth " " MagickWebSite
#define MagickWebSite  "http://www." MagickPackageName ".org/"

/*
  Method declarations.
*/
extern MagickExport const char
  *GetMagickCopyright(void),
  *GetMagickVersion(unsigned long *),
  *GetMagickWebSite(void);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
