#undef OPENSSL_LINUX
#if defined(__linux) && !defined(__ANDROID__)
# define OPENSSL_LINUX 1
#endif

#if defined(OPENSSL_LINUX) && defined(__i386__)
# include "./archs/linux-elf/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__ILP32__)
# include "./archs/linux-x32/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__x86_64__)
# include "./archs/linux-x86_64/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__arm__)
# include "./archs/linux-armv4/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__aarch64__)
# include "./archs/linux-aarch64/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__mips__)
# include "./archs/linux-mips/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__MIPSEL__)
# include "./archs/linux-mipsel/asm/crypto/include/internal/bn_conf.h"
#elif defined(__APPLE__) && defined(__MACH__) && defined(__i386__)
# include "./archs/darwin-i386-cc/asm/crypto/include/internal/bn_conf.h"
#elif defined(__APPLE__) && defined(__MACH__) && defined(__x86_64__)
# include "./archs/darwin64-x86_64-cc/asm/crypto/include/internal/bn_conf.h"
#elif defined(_WIN32) && defined(_M_IX86)
# include "./archs/VC-WIN32/asm/crypto/include/internal/bn_conf.h"
#elif defined(_WIN32) && defined(_M_X64)
# include "./archs/VC-WIN64A/asm/crypto/include/internal/bn_conf.h"
#elif (defined(__FreeBSD__) || defined(__OpenBSD__)) && defined(__i386__)
# include "./archs/BSD-x86/asm/crypto/include/internal/bn_conf.h"
#elif (defined(__FreeBSD__) || defined(__OpenBSD__)) && defined(__x86_64__)
# include "./archs/BSD-x86_64/asm/crypto/include/internal/bn_conf.h"
#elif defined(__sun) && defined(__i386__)
# include "./archs/solaris-x86-gcc/asm/crypto/include/internal/bn_conf.h"
#elif defined(__sun) && defined(__x86_64__)
# include "./archs/solaris64-x86_64-gcc/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__PPC64__)  && defined(L_ENDIAN)
# include "./archs/linux-ppc64le/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__PPC64__)
# include "./archs/linux-ppc64/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && !defined(__PPC64__) && defined(__ppc__)
# include "./archs/linux-ppc/asm/crypto/include/internal/bn_conf.h"
#elif defined(_AIX) && defined(_ARCH_PPC64)
# include "./archs/aix64-gcc/asm/crypto/include/internal/bn_conf.h"
#elif defined(_AIX) && !defined(_ARCH_PPC64) && defined(_ARCH_PPC)
# include "./archs/aix-gcc/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__s390x__)
# include "./archs/linux64-s390x/asm/crypto/include/internal/bn_conf.h"
#elif defined(OPENSSL_LINUX) && defined(__s390__)
# include "./archs/linux32-s390x/asm/crypto/include/internal/bn_conf.h"
#else
# include "./archs/linux-elf/asm/crypto/include/internal/bn_conf.h"
#endif

/* GOST is not included in all platform */
#ifndef OPENSSL_NO_GOST
# define OPENSSL_NO_GOST
#endif
/* HW_PADLOCK is not included in all platform */
#ifndef OPENSSL_NO_HW_PADLOCK
# define OPENSSL_NO_HW_PADLOCK
#endif
