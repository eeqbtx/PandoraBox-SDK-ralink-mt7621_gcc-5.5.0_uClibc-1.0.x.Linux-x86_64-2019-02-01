cmd_scripts/bin2c := gcc -Wp,-MD,scripts/.bin2c.d -O2 -I/home/lintel/PandoraBox-MT7621/staging_dir/host/include -I/home/lintel/PandoraBox-MT7621/staging_dir/host/usr/include  -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/lintel/PandoraBox-MT7621/staging_dir/host/include -I/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/tools/include  -o scripts/bin2c scripts/bin2c.c -L/home/lintel/PandoraBox-MT7621/staging_dir/host/lib 

source_scripts/bin2c := scripts/bin2c.c

deps_scripts/bin2c := \
  /usr/include/stdc-predef.h \
  /usr/include/stdio.h \
  /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
  /usr/include/features.h \
  /usr/include/x86_64-linux-gnu/sys/cdefs.h \
  /usr/include/x86_64-linux-gnu/bits/wordsize.h \
  /usr/include/x86_64-linux-gnu/bits/long-double.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
  /usr/include/x86_64-linux-gnu/bits/types.h \
  /usr/include/x86_64-linux-gnu/bits/typesizes.h \
  /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
  /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
  /usr/include/x86_64-linux-gnu/bits/libio.h \
  /usr/include/x86_64-linux-gnu/bits/_G_config.h \
    $(wildcard include/config/h.h) \
  /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
  /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
  /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
  /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
  /usr/include/x86_64-linux-gnu/bits/stdio.h \
  /usr/include/x86_64-linux-gnu/bits/stdio2.h \

scripts/bin2c: $(deps_scripts/bin2c)

$(deps_scripts/bin2c):
