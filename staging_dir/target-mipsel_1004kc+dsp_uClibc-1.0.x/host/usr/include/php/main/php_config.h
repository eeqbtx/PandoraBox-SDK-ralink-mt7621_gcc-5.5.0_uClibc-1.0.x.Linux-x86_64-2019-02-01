/* main/php_config.h.  Generated from php_config.h.in by configure.  */
/* main/php_config.h.in.  Generated from configure.in by autoheader.  */


#if defined(__GNUC__) && __GNUC__ >= 4
# define ZEND_API __attribute__ ((visibility("default")))
# define ZEND_DLEXPORT __attribute__ ((visibility("default")))
#else
# define ZEND_API
# define ZEND_DLEXPORT
#endif

#define ZEND_DLIMPORT

/* #undef uint */
/* #undef ulong */

/* Define if you want to enable memory limit support */
#define MEMORY_LIMIT 0


/* */
/* #undef AIX */

/* Whether to use native BeOS threads */
/* #undef BETHREADS */

/* */
/* #undef CDB_INCLUDE_FILE */

/* Define if system uses EBCDIC */
/* #undef CHARSET_EBCDIC */

/* Whether to build bcmath as dynamic module */
/* #undef COMPILE_DL_BCMATH */

/* Whether to build bz2 as dynamic module */
/* #undef COMPILE_DL_BZ2 */

/* Whether to build calendar as dynamic module */
#define COMPILE_DL_CALENDAR 1

/* Whether to build ctype as dynamic module */
#define COMPILE_DL_CTYPE 1

/* Whether to build curl as dynamic module */
#define COMPILE_DL_CURL 1

/* Whether to build date as dynamic module */
/* #undef COMPILE_DL_DATE */

/* Whether to build dba as dynamic module */
/* #undef COMPILE_DL_DBA */

/* Whether to build dom as dynamic module */
#define COMPILE_DL_DOM 1

/* Whether to build enchant as dynamic module */
/* #undef COMPILE_DL_ENCHANT */

/* Whether to build ereg as dynamic module */
/* #undef COMPILE_DL_EREG */

/* Whether to build exif as dynamic module */
#define COMPILE_DL_EXIF 1

/* Whether to build fileinfo as dynamic module */
#define COMPILE_DL_FILEINFO 1

/* Whether to build filter as dynamic module */
/* #undef COMPILE_DL_FILTER */

/* Whether to build ftp as dynamic module */
#define COMPILE_DL_FTP 1

/* Whether to build gd as dynamic module */
#define COMPILE_DL_GD 1

/* Whether to build gettext as dynamic module */
#define COMPILE_DL_GETTEXT 1

/* Whether to build gmp as dynamic module */
#define COMPILE_DL_GMP 1

/* Whether to build hash as dynamic module */
#define COMPILE_DL_HASH 1

/* Whether to build iconv as dynamic module */
#define COMPILE_DL_ICONV 1

/* Whether to build imap as dynamic module */
/* #undef COMPILE_DL_IMAP */

/* Whether to build interbase as dynamic module */
/* #undef COMPILE_DL_INTERBASE */

/* Whether to build intl as dynamic module */
#define COMPILE_DL_INTL 1

/* Whether to build json as dynamic module */
#define COMPILE_DL_JSON 1

/* Whether to build ldap as dynamic module */
#define COMPILE_DL_LDAP 1

/* Whether to build libxml as dynamic module */
/* #undef COMPILE_DL_LIBXML */

/* Whether to build mbstring as dynamic module */
#define COMPILE_DL_MBSTRING 1

/* Whether to build mcrypt as dynamic module */
#define COMPILE_DL_MCRYPT 1

/* Whether to build mssql as dynamic module */
/* #undef COMPILE_DL_MSSQL */

/* Whether to build mysql as dynamic module */
#define COMPILE_DL_MYSQL 1

/* Whether to build mysqli as dynamic module */
#define COMPILE_DL_MYSQLI 1

/* Whether to build mysqlnd as dynamic module */
/* #undef COMPILE_DL_MYSQLND */

/* Whether to build oci8 as dynamic module */
/* #undef COMPILE_DL_OCI8 */

/* Whether to build odbc as dynamic module */
/* #undef COMPILE_DL_ODBC */

/* Whether to build opcache as dynamic module */
#define COMPILE_DL_OPCACHE 1

/* Whether to build openssl as dynamic module */
#define COMPILE_DL_OPENSSL 1

/* Whether to build pcntl as dynamic module */
#define COMPILE_DL_PCNTL 1

/* Whether to build pcre as dynamic module */
/* #undef COMPILE_DL_PCRE */

/* Whether to build pdo as dynamic module */
#define COMPILE_DL_PDO 1

/* Whether to build pdo_dblib as dynamic module */
/* #undef COMPILE_DL_PDO_DBLIB */

/* Whether to build pdo_firebird as dynamic module */
/* #undef COMPILE_DL_PDO_FIREBIRD */

/* Whether to build pdo_mysql as dynamic module */
#define COMPILE_DL_PDO_MYSQL 1

/* Whether to build pdo_oci as dynamic module */
/* #undef COMPILE_DL_PDO_OCI */

/* Whether to build pdo_odbc as dynamic module */
/* #undef COMPILE_DL_PDO_ODBC */

/* Whether to build pdo_pgsql as dynamic module */
#define COMPILE_DL_PDO_PGSQL 1

/* Whether to build pdo_sqlite as dynamic module */
#define COMPILE_DL_PDO_SQLITE 1

/* Whether to build pgsql as dynamic module */
#define COMPILE_DL_PGSQL 1

/* Whether to build phar as dynamic module */
/* #undef COMPILE_DL_PHAR */

/* Whether to build posix as dynamic module */
/* #undef COMPILE_DL_POSIX */

/* Whether to build pspell as dynamic module */
/* #undef COMPILE_DL_PSPELL */

/* Whether to build readline as dynamic module */
/* #undef COMPILE_DL_READLINE */

/* Whether to build recode as dynamic module */
/* #undef COMPILE_DL_RECODE */

/* Whether to build reflection as dynamic module */
/* #undef COMPILE_DL_REFLECTION */

/* Whether to build session as dynamic module */
#define COMPILE_DL_SESSION 1

/* Whether to build shmop as dynamic module */
#define COMPILE_DL_SHMOP 1

/* Whether to build simplexml as dynamic module */
#define COMPILE_DL_SIMPLEXML 1

/* Whether to build snmp as dynamic module */
/* #undef COMPILE_DL_SNMP */

/* Whether to build soap as dynamic module */
#define COMPILE_DL_SOAP 1

/* Whether to build sockets as dynamic module */
#define COMPILE_DL_SOCKETS 1

/* Whether to build spl as dynamic module */
/* #undef COMPILE_DL_SPL */

/* Whether to build sqlite3 as dynamic module */
#define COMPILE_DL_SQLITE3 1

/* Whether to build standard as dynamic module */
/* #undef COMPILE_DL_STANDARD */

/* Whether to build sybase_ct as dynamic module */
/* #undef COMPILE_DL_SYBASE_CT */

/* Whether to build sysvmsg as dynamic module */
#define COMPILE_DL_SYSVMSG 1

/* Whether to build sysvsem as dynamic module */
#define COMPILE_DL_SYSVSEM 1

/* Whether to build sysvshm as dynamic module */
#define COMPILE_DL_SYSVSHM 1

/* Whether to build tidy as dynamic module */
/* #undef COMPILE_DL_TIDY */

/* Whether to build tokenizer as dynamic module */
#define COMPILE_DL_TOKENIZER 1

/* Whether to build wddx as dynamic module */
/* #undef COMPILE_DL_WDDX */

/* Whether to build xml as dynamic module */
#define COMPILE_DL_XML 1

/* Whether to build xmlreader as dynamic module */
#define COMPILE_DL_XMLREADER 1

/* Whether to build xmlrpc as dynamic module */
/* #undef COMPILE_DL_XMLRPC */

/* Whether to build xmlwriter as dynamic module */
#define COMPILE_DL_XMLWRITER 1

/* Whether to build xsl as dynamic module */
/* #undef COMPILE_DL_XSL */

/* Whether to build zip as dynamic module */
#define COMPILE_DL_ZIP 1

/* Whether to build zlib as dynamic module */
/* #undef COMPILE_DL_ZLIB */

/* */
#define COOKIE_IO_FUNCTIONS_T cookie_io_functions_t

/* */
/* #undef COOKIE_SEEKER_USES_OFF64_T */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define if crypt_r has uses CRYPTD */
/* #undef CRYPT_R_CRYPTD */

/* Define if struct crypt_data requires _GNU_SOURCE */
/* #undef CRYPT_R_GNU_SOURCE */

/* Define if crypt_r uses struct crypt_data */
/* #undef CRYPT_R_STRUCT_CRYPT_DATA */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define if the target system is darwin */
/* #undef DARWIN */

/* */
/* #undef DB1_INCLUDE_FILE */

/* */
/* #undef DB1_VERSION */

/* */
/* #undef DB2_INCLUDE_FILE */

/* */
/* #undef DB3_INCLUDE_FILE */

/* */
/* #undef DB4_INCLUDE_FILE */

/* */
/* #undef DBA_CDB */

/* */
/* #undef DBA_CDB_BUILTIN */

/* */
/* #undef DBA_CDB_MAKE */

/* */
/* #undef DBA_DB1 */

/* */
/* #undef DBA_DB2 */

/* */
/* #undef DBA_DB3 */

/* */
/* #undef DBA_DB4 */

/* */
/* #undef DBA_DBM */

/* */
/* #undef DBA_FLATFILE */

/* */
/* #undef DBA_GDBM */

/* */
/* #undef DBA_INIFILE */

/* */
/* #undef DBA_NDBM */

/* */
/* #undef DBA_QDBM */

/* */
/* #undef DBA_TCADB */

/* */
/* #undef DBM_INCLUDE_FILE */

/* */
/* #undef DBM_VERSION */

/* */
#define DEFAULT_SHORT_OPEN_TAG "0"

/* Whether to enable chroot() function */
/* #undef ENABLE_CHROOT_FUNC */

/* */
/* #undef ENABLE_GD_TTF */

/* */
/* #undef ENCHANT_VERSION_STRING */

/* */
/* #undef GDBM_INCLUDE_FILE */

/* Whether you use GNU Pth */
/* #undef GNUPTH */

/* Define to 1 if `TIOCGWINSZ' requires <sys/ioctl.h>. */
/* #undef GWINSZ_IN_SYS_IOCTL */

/* Whether 3 arg set_rebind_proc() */
#define HAVE_3ARG_SETREBINDPROC 1

/* Define to 1 if you have the `acosh' function. */
#define HAVE_ACOSH 1

/* */
/* #undef HAVE_ADABAS */

/* Whether you have AI_V4MAPPED */
#define HAVE_AI_V4MAPPED 1

/* whether the compiler supports __alignof__ */
#define HAVE_ALIGNOF 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the `alphasort' function. */
#define HAVE_ALPHASORT 1

/* Whether you have AOLserver */
/* #undef HAVE_AOLSERVER */

/* */
/* #undef HAVE_APACHE */

/* */
/* #undef HAVE_APACHE_HOOKS */

/* do we have apparmor support? */
/* #undef HAVE_APPARMOR */

/* Define to 1 if you have the <ApplicationServices/ApplicationServices.h>
   header file. */
/* #undef HAVE_APPLICATIONSERVICES_APPLICATIONSERVICES_H */

/* */
/* #undef HAVE_AP_COMPAT_H */

/* */
/* #undef HAVE_AP_CONFIG_H */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define to 1 if you have the `asctime_r' function. */
#define HAVE_ASCTIME_R 1

/* Define to 1 if you have the `asinh' function. */
#define HAVE_ASINH 1

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the `atanh' function. */
#define HAVE_ATANH 1

/* whether atof() accepts INF */
/* #undef HAVE_ATOF_ACCEPTS_INF */

/* whether atof() accepts NAN */
/* #undef HAVE_ATOF_ACCEPTS_NAN */

/* Define to 1 if you have the `atoll' function. */
#define HAVE_ATOLL 1

/* Define to 1 if you have the <atomic.h> header file. */
/* #undef HAVE_ATOMIC_H */

/* whether the compiler supports __attribute__ ((__aligned__)) */
#define HAVE_ATTRIBUTE_ALIGNED 1

/* Whether you have bcmath */
/* #undef HAVE_BCMATH */

/* */
/* #undef HAVE_BIND_TEXTDOMAIN_CODESET */

/* */
/* #undef HAVE_BIRDSTEP */

/* Define if system has broken getcwd */
/* #undef HAVE_BROKEN_GETCWD */

/* Define if your glibc borks on fopen with mode a+ */
#define HAVE_BROKEN_GLIBC_FOPEN_APPEND 1

/* Whether we have librecode 3.5 */
/* #undef HAVE_BROKEN_RECODE */

/* Konstantin Chuguev's iconv implementation */
/* #undef HAVE_BSD_ICONV */

/* */
#define HAVE_BUILD_DEFS_H 1

/* Define to 1 if gcc supports __sync_bool_compare_and_swap() a.o. */
#define HAVE_BUILTIN_ATOMIC 1

/* */
/* #undef HAVE_BUNDLED_PCRE */

/* */
/* #undef HAVE_BZ2 */

/* */
#define HAVE_CALENDAR 1

/* Whether to compile with Caudium support */
/* #undef HAVE_CAUDIUM */

/* Define to 1 if you have the `chroot' function. */
#define HAVE_CHROOT 1

/* Define to 1 if you have the `clearenv' function. */
#define HAVE_CLEARENV 1

/* */
/* #undef HAVE_CLI0CLI_H */

/* */
/* #undef HAVE_CLI0CORE_H */

/* */
/* #undef HAVE_CLI0DEFS_H */

/* */
/* #undef HAVE_CLI0ENV_H */

/* */
/* #undef HAVE_CLI0EXT_H */

/* do we have clock_gettime? */
#define HAVE_CLOCK_GETTIME 1

/* do we have clock_get_time? */
/* #undef HAVE_CLOCK_GET_TIME */

/* Whether you have struct cmsghdr */
#define HAVE_CMSGHDR 1

/* */
/* #undef HAVE_CODBC */

/* Whether you have a Continuity Server */
/* #undef HAVE_CONTINUITY */

/* Define to 1 if you have the `CreateProcess' function. */
/* #undef HAVE_CREATEPROCESS */

/* */
#define HAVE_CRYPT 1

/* Define to 1 if you have the <crypt.h> header file. */
#define HAVE_CRYPT_H 1

/* Define to 1 if you have the `crypt_r' function. */
/* #undef HAVE_CRYPT_R */

/* Define to 1 if you have the `ctermid' function. */
#define HAVE_CTERMID 1

/* Define to 1 if you have the `ctime_r' function. */
#define HAVE_CTIME_R 1

/* */
#define HAVE_CTYPE 1

/* */
#define HAVE_CURL 1

/* */
#define HAVE_CURL_EASY_STRERROR 1

/* Have cURL with GnuTLS support */
/* #undef HAVE_CURL_GNUTLS */

/* */
#define HAVE_CURL_MULTI_STRERROR 1

/* Have cURL with OpenSSL support */
/* #undef HAVE_CURL_OPENSSL */

/* Have cURL with SSL support */
#define HAVE_CURL_SSL 1

/* Define to 1 if you have the `cuserid' function. */
#define HAVE_CUSERID 1

/* */
/* #undef HAVE_DBA */

/* Whether you want DBMaker */
/* #undef HAVE_DBMAKER */

/* */
/* #undef HAVE_DCNGETTEXT */

/* Whether system headers declare timezone */
#define HAVE_DECLARED_TIMEZONE 1

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
/* #undef HAVE_DECL_TZNAME */

/* do we have /dev/poll? */
/* #undef HAVE_DEVPOLL */

/* Define if the target system has /dev/arandom device */
/* #undef HAVE_DEV_ARANDOM */

/* Define if the target system has /dev/urandom device */
#define HAVE_DEV_URANDOM 1

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* */
#define HAVE_DLOPEN 1

/* Whether you have dmalloc */
/* #undef HAVE_DMALLOC */

/* */
/* #undef HAVE_DNGETTEXT */

/* Define to 1 if you have the <dns.h> header file. */
/* #undef HAVE_DNS_H */

/* */
/* #undef HAVE_DNS_SEARCH */

/* */
#define HAVE_DN_EXPAND 1

/* */
#define HAVE_DN_SKIPNAME 1

/* */
#define HAVE_DOM 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* OpenSSL 0.9.7 or later */
#define HAVE_DSA_DEFAULT_METHOD 1

/* Whether to enable DTrace support */
/* #undef HAVE_DTRACE */

/* embedded MySQL support enabled */
/* #undef HAVE_EMBEDDED_MYSQLI */

/* */
/* #undef HAVE_EMPRESS */

/* */
/* #undef HAVE_ENCHANT */

/* */
/* #undef HAVE_ENCHANT_BROKER_SET_PARAM */

/* do we have epoll? */
#define HAVE_EPOLL 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* */
/* #undef HAVE_ESOOB */

/* Whether you want EXIF (metadata from images) support */
#define HAVE_EXIF 1

/* Define to 1 if you have the `fabsf' function. */
#define HAVE_FABSF 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `finite' function. */
/* #undef HAVE_FINITE */

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Struct flock is BSD-type */
/* #undef HAVE_FLOCK_BSD */

/* Struct flock is Linux-type */
#define HAVE_FLOCK_LINUX /**/

/* Define to 1 if you have the `floorf' function. */
#define HAVE_FLOORF 1

/* Define if flush should be called explicitly after a buffered io. */
/* #undef HAVE_FLUSHIO */

/* Define to 1 if your system has a working POSIX `fnmatch' function. */
/* #undef HAVE_FNMATCH */

/* */
#define HAVE_FOPENCOOKIE 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `fpclass' function. */
/* #undef HAVE_FPCLASS */

/* POSIX Access Control List */
/* #undef HAVE_FPM_ACL */

/* whether fpsetprec is present and usable */
/* #undef HAVE_FPSETPREC */

/* whether FPU control word can be manipulated by inline assembler */
/* #undef HAVE_FPU_INLINE_ASM_X86 */

/* whether floatingpoint.h defines fp_except */
/* #undef HAVE_FP_EXCEPT */

/* */
/* #undef HAVE_FREETDS */

/* Define to 1 if you have the `ftok' function. */
#define HAVE_FTOK 1

/* Whether you want FTP support */
#define HAVE_FTP 1

/* Define to 1 if you have the `funopen' function. */
/* #undef HAVE_FUNOPEN */

/* Define to 1 if you have the `gai_strerror' function. */
#define HAVE_GAI_STRERROR 1

/* Whether you have gcov */
/* #undef HAVE_GCOV */

/* Define to 1 if you have the `gcvt' function. */
#define HAVE_GCVT 1

/* */
#define HAVE_GD_BUNDLED 1

/* */
#define HAVE_GD_CACHE_CREATE 1

/* */
/* #undef HAVE_GD_FREETYPE */

/* */
#define HAVE_GD_JPG 1

/* */
/* #undef HAVE_GD_LIBVERSION */

/* */
#define HAVE_GD_PNG 1

/* */
/* #undef HAVE_GD_WEBP */

/* */
/* #undef HAVE_GD_XPM */

/* Define if you have the getaddrinfo function */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getgrgid_r' function. */
#define HAVE_GETGRGID_R 1

/* Define to 1 if you have the `getgrnam_r' function. */
#define HAVE_GETGRNAM_R 1

/* Define to 1 if you have the `getgroups' function. */
#define HAVE_GETGROUPS 1

/* */
#define HAVE_GETHOSTBYADDR 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getloadavg' function. */
/* #undef HAVE_GETLOADAVG */

/* Define to 1 if you have the `getlogin' function. */
#define HAVE_GETLOGIN 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the `getpgid' function. */
#define HAVE_GETPGID 1

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getpriority' function. */
#define HAVE_GETPRIORITY 1

/* Define to 1 if you have the `getprotobyname' function. */
#define HAVE_GETPROTOBYNAME 1

/* Define to 1 if you have the `getprotobynumber' function. */
#define HAVE_GETPROTOBYNUMBER 1

/* Define to 1 if you have the `getpwnam_r' function. */
#define HAVE_GETPWNAM_R 1

/* Define to 1 if you have the `getpwuid_r' function. */
#define HAVE_GETPWUID_R 1

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `getservbyname' function. */
#define HAVE_GETSERVBYNAME 1

/* Define to 1 if you have the `getservbyport' function. */
#define HAVE_GETSERVBYPORT 1

/* Define to 1 if you have the `getsid' function. */
#define HAVE_GETSID 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getwd' function. */
/* #undef HAVE_GETWD */

/* */
/* #undef HAVE_GICONV_H */

/* glibc's iconv implementation */
#define HAVE_GLIBC_ICONV 1

/* Define to 1 if you have the `glob' function. */
#define HAVE_GLOB 1

/* */
#define HAVE_GMP 1

/* Define to 1 if you have the `gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* Define to 1 if you have the `grantpt' function. */
#define HAVE_GRANTPT 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Have HASH Extension */
#define HAVE_HASH_EXT 1

/* Define to 1 if you have the `hstrerror' function. */
#define HAVE_HSTRERROR 1

/* */
#define HAVE_HTONL 1

/* whether HUGE_VAL == INF */
#define HAVE_HUGE_VAL_INF 1

/* whether HUGE_VAL + -HUGEVAL == NAN */
#define HAVE_HUGE_VAL_NAN 1

/* Define to 1 if you have the `hypot' function. */
#define HAVE_HYPOT 1

/* */
/* #undef HAVE_IBASE */

/* */
/* #undef HAVE_IBMDB2 */

/* IBM iconv implementation */
/* #undef HAVE_IBM_ICONV */

/* */
#define HAVE_ICONV 1

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Define to 1 if you have the `if_indextoname' function. */
#define HAVE_IF_INDEXTONAME 1

/* Define to 1 if you have the `if_nametoindex' function. */
#define HAVE_IF_NAMETOINDEX 1

/* */
/* #undef HAVE_IMAP */

/* */
/* #undef HAVE_IMAP2000 */

/* */
/* #undef HAVE_IMAP2001 */

/* */
/* #undef HAVE_IMAP2004 */

/* */
/* #undef HAVE_IMAP_AUTH_GSS */

/* */
/* #undef HAVE_IMAP_KRB */

/* */
/* #undef HAVE_IMAP_MUTF7 */

/* */
/* #undef HAVE_IMAP_SSL */

/* */
#define HAVE_INET_ATON 1

/* Define to 1 if you have the `inet_ntoa' function. */
#define HAVE_INET_NTOA 1

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if the system has the type `int16'. */
/* #undef HAVE_INT16 */

/* Define to 1 if the system has the type `int16_t'. */
#define HAVE_INT16_T 1

/* Define to 1 if the system has the type `int32'. */
/* #undef HAVE_INT32 */

/* Define if int32_t type is present. */
#define HAVE_INT32_T 1

/* Define to 1 if the system has the type `int64'. */
/* #undef HAVE_INT64 */

/* Define to 1 if the system has the type `int64_t'. */
#define HAVE_INT64_T 1

/* Define to 1 if the system has the type `int8'. */
/* #undef HAVE_INT8 */

/* Define to 1 if the system has the type `int8_t'. */
#define HAVE_INT8_T 1

/* Whether intmax_t is available */
/* #undef HAVE_INTMAX_T */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* */
/* #undef HAVE_IODBC */

/* */
/* #undef HAVE_IODBC_H */

/* Whether to enable IPv6 support */
#define HAVE_IPV6 1

/* Define to 1 if you have the `isascii' function. */
#define HAVE_ISASCII 1

/* Define to 1 if you have the `isfinite' function. */
/* #undef HAVE_ISFINITE */

/* Define to 1 if you have the `isinf' function. */
/* #undef HAVE_ISINF */

/* Define to 1 if you have the `isnan' function. */
#define HAVE_ISNAN 1

/* */
/* #undef HAVE_ISQLEXT_H */

/* */
/* #undef HAVE_ISQL_H */

/* whether to enable JavaScript Object Serialization support */
#define HAVE_JSON 1 

/* Define to 1 if you have the `kill' function. */
#define HAVE_KILL 1

/* do we have kqueue? */
/* #undef HAVE_KQUEUE */

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define to 1 if you have the `lchown' function. */
#define HAVE_LCHOWN 1

/* */
#define HAVE_LDAP 1

/* Define to 1 if you have the `ldap_control_find' function. */
#define HAVE_LDAP_CONTROL_FIND 1

/* Define to 1 if you have the `ldap_parse_reference' function. */
#define HAVE_LDAP_PARSE_REFERENCE 1

/* Define to 1 if you have the `ldap_parse_result' function. */
#define HAVE_LDAP_PARSE_RESULT 1

/* LDAP SASL support */
#define HAVE_LDAP_SASL 1

/* */
/* #undef HAVE_LDAP_SASL_H */

/* */
#define HAVE_LDAP_SASL_SASL_H 1

/* Define to 1 if you have the `ldap_start_tls_s' function. */
#define HAVE_LDAP_START_TLS_S 1

/* */
/* #undef HAVE_LIBBIND */

/* */
/* #undef HAVE_LIBCRYPT */

/* */
#define HAVE_LIBDL 1

/* */
/* #undef HAVE_LIBDNET_STUB */

/* */
/* #undef HAVE_LIBEDIT */

/* */
/* #undef HAVE_LIBEXPAT */

/* */
/* #undef HAVE_LIBFREETYPE */

/* */
/* #undef HAVE_LIBGD */

/* */
/* #undef HAVE_LIBICONV */

/* */
#define HAVE_LIBINTL 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* */
#define HAVE_LIBMCRYPT 1

/* Whether you have libmm */
/* #undef HAVE_LIBMM */

/* */
/* #undef HAVE_LIBNSL */

/* */
/* #undef HAVE_LIBPAM */

/* Define to 1 if you have the `pq' library (-lpq). */
#define HAVE_LIBPQ 1

/* */
/* #undef HAVE_LIBRARYMANAGER_H */

/* */
/* #undef HAVE_LIBREADLINE */

/* Whether we have librecode 3.5 or higher */
/* #undef HAVE_LIBRECODE */

/* */
/* #undef HAVE_LIBRESOLV */

/* */
/* #undef HAVE_LIBRT */

/* */
/* #undef HAVE_LIBSOCKET */

/* */
/* #undef HAVE_LIBT1 */

/* */
#define HAVE_LIBXML 1

/* */
/* #undef HAVE_LIBZIP */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the `localeconv' function. */
#define HAVE_LOCALECONV 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the `lockf' function. */
#define HAVE_LOCKF 1

/* Define to 1 if you have the `log1p' function. */
#define HAVE_LOG1P 1

/* do we have SO_LISTENQxxx? */
/* #undef HAVE_LQ_SO_LISTENQ */

/* do we have TCP_INFO? */
#define HAVE_LQ_TCP_INFO 1

/* Define to 1 if you have the `lrand48' function. */
#define HAVE_LRAND48 1

/* do we have mach_vm_read? */
/* #undef HAVE_MACH_VM_READ */

/* Define to 1 if you have the `makedev' function. */
/* #undef HAVE_MAKEDEV */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `mblen' function. */
#define HAVE_MBLEN 1

/* whether to have multibyte regex support */
#define HAVE_MBREGEX 1

/* Define to 1 if you have the `mbrlen' function. */
#define HAVE_MBRLEN 1

/* Define to 1 if you have the `mbsinit' function. */
#define HAVE_MBSINIT 1

/* Define if your system has mbstate_t in wchar.h */
#define HAVE_MBSTATE_T 1

/* whether to have multibyte string support */
#define HAVE_MBSTRING 1

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mempcpy' function. */
#define HAVE_MEMPCPY 1

/* Define if the target system has support for memory allocation using
   mmap(MAP_ANON) */
/* #undef HAVE_MEM_MMAP_ANON */

/* Define if the target system has support for memory allocation using
   mmap("/dev/zero") */
/* #undef HAVE_MEM_MMAP_ZERO */

/* Define to 1 if you have the `mkfifo' function. */
#define HAVE_MKFIFO 1

/* Define to 1 if you have the `mknod' function. */
#define HAVE_MKNOD 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <monetary.h> header file. */
/* #undef HAVE_MONETARY_H */

/* Define if you have mprotect() function */
#define HAVE_MPROTECT 1

/* Define to 1 if you have the `mremap' function. */
#define HAVE_MREMAP 1

/* */
/* #undef HAVE_MSSQL */

/* Whether you have MySQL */
#define HAVE_MYSQL 1

/* */
#define HAVE_MYSQLILIB 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Whether utf8_mime2text() has new signature */
/* #undef HAVE_NEW_MIME2TEXT */

/* */
/* #undef HAVE_NGETTEXT */

/* Define to 1 if you have the `nice' function. */
#define HAVE_NICE 1

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Whether you have a Netscape/iPlanet/Sun Webserver */
/* #undef HAVE_NSAPI */

/* */
/* #undef HAVE_NSLDAP */

/* Defined to 1 if the PHP OCI8 extension for Oracle Database is configured */
/* #undef HAVE_OCI8 */

/* Defined to 1 if PHP OCI8 DTrace support was enabled during configuration */
/* #undef HAVE_OCI8_DTRACE */

/* */
/* #undef HAVE_OCICOLLASSIGN */

/* */
/* #undef HAVE_OCIENVCREATE */

/* */
/* #undef HAVE_OCIENVNLSCREATE */

/* */
/* #undef HAVE_OCILOBISTEMPORARY */

/* */
/* #undef HAVE_OCISTMTFETCH2 */

/* Defined to 1 if OCI8 configuration located Oracle's Instant Client
   libraries */
/* #undef HAVE_OCI_INSTANT_CLIENT */

/* */
/* #undef HAVE_ODBC2 */

/* */
/* #undef HAVE_ODBCSDK_H */

/* */
/* #undef HAVE_ODBC_H */

/* */
/* #undef HAVE_ODBC_ROUTER */

/* */
/* #undef HAVE_OLD_COMPAT_H */

/* whether you have old-style readdir_r */
/* #undef HAVE_OLD_READDIR_R */

/* Define to 1 if the oniguruma library is available */
#define HAVE_ONIG 1

/* Define to 1 if you have the <openssl/crypto.h> header file. */
/* #undef HAVE_OPENSSL_CRYPTO_H */

/* */
#define HAVE_OPENSSL_EXT 1

/* */
/* #undef HAVE_ORALDAP */

/* */
/* #undef HAVE_ORALDAP_10 */

/* */
/* #undef HAVE_ORALDAP_11 */

/* */
/* #undef HAVE_ORALDAP_12 */

/* Whether struct _zend_object_value is packed */
#define HAVE_PACKED_OBJECT_VALUE 0

/* */
#define HAVE_PCRE 1

/* */
/* #undef HAVE_PDO_DBLIB */

/* */
/* #undef HAVE_PDO_FIREBIRD */

/* Whether to build PostgreSQL for PDO support or not */
#define HAVE_PDO_PGSQL 1

/* */
#define HAVE_PDO_SQLITELIB 1

/* Define to 1 if you have the `perror' function. */
#define HAVE_PERROR 1

/* Whether to build PostgreSQL support or not */
#define HAVE_PGSQL 1

/* Whether libpq is compiled with --enable-multibyte */
#define HAVE_PGSQL_WITH_MULTIBYTE_SUPPORT 1

/* PostgreSQL 7.4 or later */
#define HAVE_PGTRANSACTIONSTATUS 1

/* Whether to have pg_config.h */
#define HAVE_PG_CONFIG_H 1

/* PostgreSQL 9.3 or later */
/* #undef HAVE_PG_LO64 */

/* PostgreSQL 8.1 or later */
#define HAVE_PG_LO_CREATE 1

/* PostgreSQL 8.4 or later */
#define HAVE_PG_LO_IMPORT_WITH_OID 1

/* PostgreSQL 8.3 or later */
#define HAVE_PG_LO_TRUNCATE 1

/* */
/* #undef HAVE_PHPDBG */

/* */
#define HAVE_PHP_SESSION 1

/* Whether you have phttpd */
/* #undef HAVE_PHTTPD */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* do we have port framework? */
/* #undef HAVE_PORT */

/* whether to include POSIX-like functions */
#define HAVE_POSIX 1

/* whether you have POSIX readdir_r */
/* #undef HAVE_POSIX_READDIR_R */

/* PostgreSQL 7.0.x or later */
#define HAVE_PQCLIENTENCODING 1

/* Broken libpq under windows */
#define HAVE_PQCMDTUPLES 1

/* PostgreSQL 7.2.0 or later */
#define HAVE_PQESCAPE 1

/* PostgreSQL 9.0 or later */
#define HAVE_PQESCAPELITERAL 1

/* PostgreSQL 8.1.4 or later */
#define HAVE_PQESCAPE_BYTEA_CONN 1

/* PostgreSQL 8.1.4 or later */
#define HAVE_PQESCAPE_CONN 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQEXECPARAMS 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQEXECPREPARED 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQFREEMEM 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQFTABLE 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQGETCOPYDATA 1

/* Older PostgreSQL */
#define HAVE_PQOIDVALUE 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPARAMETERSTATUS 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPREPARE 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPROTOCOLVERSION 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPUTCOPYDATA 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQPUTCOPYEND 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQRESULTERRORFIELD 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQSENDPREPARE 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQSENDQUERYPARAMS 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQSENDQUERYPREPARED 1

/* PostgreSQL 7.4 or later */
#define HAVE_PQSETERRORVERBOSITY 1

/* PostgreSQL 7.0.x or later */
#define HAVE_PQSETNONBLOCKING 1

/* PostgreSQL 7.3.0 or later */
#define HAVE_PQUNESCAPEBYTEA 1

/* do we have prctl? */
#define HAVE_PRCTL 1

/* */
/* #undef HAVE_PREAD */

/* */
/* #undef HAVE_PSPELL */

/* Define to 1 if the PS_STRINGS thing exists. */
/* #undef HAVE_PS_STRINGS */

/* do we have ptrace? */
#define HAVE_PTRACE 1

/* Whether ptrdiff_t is available */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the `ptsname' function. */
#define HAVE_PTSNAME 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* */
/* #undef HAVE_PWRITE */

/* Define to 1 if you have the `random' function. */
#define HAVE_RANDOM 1

/* Define to 1 if you have the `RAND_egd' function. */
/* #undef HAVE_RAND_EGD */

/* Define to 1 if you have the `rand_r' function. */
#define HAVE_RAND_R 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Whether Reflection is enabled */
#define HAVE_REFLECTION 1

/* 1 */
#define HAVE_REGEX_T_RE_MAGIC 1

/* Define to 1 if you have the <resolv.h> header file. */
#define HAVE_RESOLV_H 1

/* */
/* #undef HAVE_RES_NSEARCH */

/* */
#define HAVE_RES_SEARCH 1

/* */
/* #undef HAVE_RFC822_OUTPUT_ADDRESS_LIST */

/* */
/* #undef HAVE_RL_CALLBACK_READ_CHAR */

/* Define to 1 if you have the `rl_completion_matches' function. */
/* #undef HAVE_RL_COMPLETION_MATCHES */

/* */
/* #undef HAVE_RL_ON_NEW_LINE */

/* Whether you use Roxen */
/* #undef HAVE_ROXEN */

/* */
/* #undef HAVE_SAPDB */

/* Whether you have sockaddr_storage.ss_family */
#define HAVE_SA_SS_FAMILY 1

/* Define to 1 if you have the `scandir' function. */
#define HAVE_SCANDIR 1

/* do we have select? */
#define HAVE_SELECT 1

/* */
#define HAVE_SEMUN 0

/* Define to 1 if you have the `setegid' function. */
#define HAVE_SETEGID 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setitimer' function. */
#define HAVE_SETITIMER 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setpgid' function. */
#define HAVE_SETPGID 1

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the `setproctitle' function. */
/* #undef HAVE_SETPROCTITLE */

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `setsockopt' function. */
#define HAVE_SETSOCKOPT 1

/* Define to 1 if you have the `setvbuf' function. */
#define HAVE_SETVBUF 1

/* */
#define HAVE_SHMOP 1

/* Define if you have SysV IPC SHM support */
#define HAVE_SHM_IPC 1

/* Define if you have mmap(MAP_ANON) SHM support */
#define HAVE_SHM_MMAP_ANON 1

/* Define if you have mmap() SHM support */
/* #undef HAVE_SHM_MMAP_FILE */

/* Define if you have POSIX mmap() SHM support */
/* #undef HAVE_SHM_MMAP_POSIX */

/* Define if you have mmap("/dev/zero") SHM support */
/* #undef HAVE_SHM_MMAP_ZERO */

/* Define to 1 if you have the `shutdown' function. */
#define HAVE_SHUTDOWN 1

/* */
/* #undef HAVE_SHUTDOWN_SNMP_LOGGING */

/* Whether sigaction() is available */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigprocmask' function. */
#define HAVE_SIGPROCMASK 1

/* Define to 1 if you have the `sigsetjmp' function. */
/* #undef HAVE_SIGSETJMP */

/* Define to 1 if you have the `sigtimedwait' function. */
#define HAVE_SIGTIMEDWAIT 1

/* Define to 1 if you have the `sigwaitinfo' function. */
#define HAVE_SIGWAITINFO 1

/* */
#define HAVE_SIMPLEXML 1

/* Define to 1 if you have the `sin' function. */
#define HAVE_SIN 1

/* */
/* #undef HAVE_SNMP */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* */
#define HAVE_SOAP 1

/* Whether struct sockaddr has field sa_len */
/* #undef HAVE_SOCKADDR_SA_LEN */

/* Whether you have struct sockaddr_storage */
#define HAVE_SOCKADDR_STORAGE 1

/* Define if sockaddr_un in sys/un.h contains a sun_len component */
/* #undef HAVE_SOCKADDR_UN_SUN_LEN */

/* */
#define HAVE_SOCKET 1

/* Define to 1 if you have the `socketpair' function. */
#define HAVE_SOCKETPAIR 1

/* */
#define HAVE_SOCKETS 1

/* Whether you have socklen_t */
#define HAVE_SOCKLEN_T 1

/* */
/* #undef HAVE_SOLID */

/* */
/* #undef HAVE_SOLID_30 */

/* */
/* #undef HAVE_SOLID_35 */

/* Whether you want SPL (Standard PHP Library) support */
#define HAVE_SPL 1

/* */
/* #undef HAVE_SQLCLI1_H */

/* */
/* #undef HAVE_SQLDATASOURCES */

/* */
/* #undef HAVE_SQLEXT_H */

/* */
#define HAVE_SQLITE3 1

/* have commercial sqlite3 with crypto support */
/* #undef HAVE_SQLITE3_KEY */

/* */
/* #undef HAVE_SQLTYPES_H */

/* */
/* #undef HAVE_SQLUCODE_H */

/* */
/* #undef HAVE_SQLUNIX_H */

/* */
/* #undef HAVE_SQL_H */

/* Define to 1 if you have the `srand48' function. */
#define HAVE_SRAND48 1

/* Define to 1 if you have the `srandom' function. */
#define HAVE_SRANDOM 1

/* Define to 1 if the system has the type `ssize_t'. */
#define HAVE_SSIZE_T 1

/* Define to 1 if you have the `statfs' function. */
#define HAVE_STATFS 1

/* Define to 1 if you have the `statvfs' function. */
#define HAVE_STATVFS 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_PROTOTYPES 1

/* Define to 1 if you have the <stdbool.h> header file. */
/* #undef HAVE_STDBOOL_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `std_syslog' function. */
/* #undef HAVE_STD_SYSLOG */

/* */
/* #undef HAVE_STMT_NEXT_RESULT */

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcoll' function. */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strfmon' function. */
/* #undef HAVE_STRFMON */

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strpbrk' function. */
/* #undef HAVE_STRPBRK */

/* Define to 1 if you have the `strpncpy' function. */
/* #undef HAVE_STRPNCPY */

/* Define to 1 if you have the `strptime' function. */
#define HAVE_STRPTIME 1

/* whether strptime() declaration fails */
#define HAVE_STRPTIME_DECL_FAILS 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtod' function. */
#define HAVE_STRTOD 1

/* Define to 1 if you have the `strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoul' function. */
/* #undef HAVE_STRTOUL */

/* Define to 1 if you have the `strtoull' function. */
/* #undef HAVE_STRTOULL */

/* whether you have struct flock */
#define HAVE_STRUCT_FLOCK 1

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLOCKS 1

/* Define to 1 if `st_rdev' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_ZONE 1

/* Define to 1 if your `struct stat' has `st_blksize'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLKSIZE' instead. */
#define HAVE_ST_BLKSIZE 1

/* Define to 1 if your `struct stat' has `st_blocks'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLOCKS' instead. */
#define HAVE_ST_BLOCKS 1

/* Define to 1 if you have the <st.h> header file. */
/* #undef HAVE_ST_H */

/* Define to 1 if your `struct stat' has `st_rdev'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_RDEV' instead. */
#define HAVE_ST_RDEV 1

/* */
/* #undef HAVE_SYBASE_CT */

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define if you have the __sync_fetch_and_add function */
#define HAVE_SYNC_FETCH_AND_ADD 1

/* do we have sysconf? */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sysexits.h> header file. */
#define HAVE_SYSEXITS_H 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* FPM use systemd integration */
/* #undef HAVE_SYSTEMD */

/* Define to 1 if you have the <systemd/sd-daemon.h> header file. */
/* #undef HAVE_SYSTEMD_SD_DAEMON_H */

/* Define if system timezone data is used */
#define HAVE_SYSTEM_TZDATA 1

/* Define for location of system timezone data */
/* #undef HAVE_SYSTEM_TZDATA_PREFIX */

/* */
#define HAVE_SYSVMSG 1

/* */
#define HAVE_SYSVSEM 1

/* */
#define HAVE_SYSVSHM 1

/* Define to 1 if you have the <sys/acl.h> header file. */
/* #undef HAVE_SYS_ACL_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ipc.h> header file. */
#define HAVE_SYS_IPC_H 1

/* Define to 1 if you have the <sys/loadavg.h> header file. */
/* #undef HAVE_SYS_LOADAVG_H */

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/pstat.h> header file. */
/* #undef HAVE_SYS_PSTAT_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/sdt.h> header file. */
/* #undef HAVE_SYS_SDT_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysexits.h> header file. */
/* #undef HAVE_SYS_SYSEXITS_H */

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/varargs.h> header file. */
/* #undef HAVE_SYS_VARARGS_H */

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `tempnam' function. */
#define HAVE_TEMPNAM 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* */
/* #undef HAVE_TIDY */

/* */
/* #undef HAVE_TIDYOPTGETDOC */

/* Have timelib_config.h */
#define HAVE_TIMELIB_CONFIG_H 1

/* do we have times? */
#define HAVE_TIMES 1

/* Define to 1 if you have the <time.h> header file. */
/* #undef HAVE_TIME_H */

/* whether you have tm_gmtoff in struct tm */
#define HAVE_TM_GMTOFF 1

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#define HAVE_TM_ZONE 1

/* Whether you have a working ttyname_r */
/* #undef HAVE_TTYNAME_R */

/* Define to 1 if you have the <tuxmodule.h> header file. */
/* #undef HAVE_TUXMODULE_H */

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
/* #undef HAVE_TZNAME */

/* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* */
/* #undef HAVE_UDBCEXT_H */

/* Define to 1 if the system has the type `uint16'. */
/* #undef HAVE_UINT16 */

/* Define to 1 if the system has the type `uint16_t'. */
#define HAVE_UINT16_T 1

/* Define to 1 if the system has the type `uint32'. */
/* #undef HAVE_UINT32 */

/* Define if uint32_t type is present. */
#define HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint64'. */
/* #undef HAVE_UINT64 */

/* Define to 1 if the system has the type `uint64_t'. */
#define HAVE_UINT64_T 1

/* Define to 1 if the system has the type `uint8'. */
/* #undef HAVE_UINT8 */

/* Define to 1 if the system has the type `uint8_t'. */
#define HAVE_UINT8_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* */
/* #undef HAVE_UNIXODBC */

/* Define to 1 if you have the <unix.h> header file. */
/* #undef HAVE_UNIX_H */

/* Define to 1 if you have the `unlockpt' function. */
#define HAVE_UNLOCKPT 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* */
/* #undef HAVE_UODBC */

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the `utimes' function. */
#define HAVE_UTIMES 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if `utime(file, NULL)' sets file's timestamp to the present. */
#define HAVE_UTIME_NULL 1

/* Whether struct utsname has domainname */
#define HAVE_UTSNAME_DOMAINNAME 1

/* Define to 1 if the system has the type `u_int16_t'. */
#define HAVE_U_INT16_T 1

/* Define to 1 if the system has the type `u_int32_t'. */
#define HAVE_U_INT32_T 1

/* Define to 1 if the system has the type `u_int64_t'. */
#define HAVE_U_INT64_T 1

/* Define to 1 if the system has the type `u_int8_t'. */
#define HAVE_U_INT8_T 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `wait3' function. */
#define HAVE_WAIT3 1

/* */
#define HAVE_WAITPID 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* */
/* #undef HAVE_WDDX */

/* */
#define HAVE_XML 1

/* Define to 1 if you have the <xmlparse.h> header file. */
/* #undef HAVE_XMLPARSE_H */

/* */
#define HAVE_XMLREADER 1

/* */
/* #undef HAVE_XMLRPC */

/* Define to 1 if you have the <xmltok.h> header file. */
/* #undef HAVE_XMLTOK_H */

/* */
#define HAVE_XMLWRITER 1

/* */
/* #undef HAVE_XSL */

/* */
/* #undef HAVE_XSL_EXSLT */

/* */
/* #undef HAVE_YP_GET_DEFAULT_DOMAIN */

/* */
#define HAVE_ZIP 1

/* */
#define HAVE_ZLIB 1

/* whether _controlfp is present usable */
/* #undef HAVE__CONTROLFP */

/* whether _controlfp_s is present and usable */
/* #undef HAVE__CONTROLFP_S */

/* whether _FPU_SETCW is present and usable */
/* #undef HAVE__FPU_SETCW */

/* */
/* #undef HPUX */

/* */
#define HSREGEX 1

/* iconv() is aliased to libiconv() in -liconv */
/* #undef ICONV_ALIASED_LIBICONV */

/* Whether iconv supports IGNORE */
#define ICONV_BROKEN_IGNORE 0

/* Whether iconv supports error no or not */
#define ICONV_SUPPORTS_ERRNO 0

/* */
/* #undef ISOLARIS */

/* */
/* #undef LINUX */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Whether asctime_r is declared */
/* #undef MISSING_ASCTIME_R_DECL */

/* Whether ctime_r is declared */
/* #undef MISSING_CTIME_R_DECL */

/* */
#define MISSING_FCLOSE_DECL 0

/* Whether gmtime_r is declared */
/* #undef MISSING_GMTIME_R_DECL */

/* Whether localtime_r is declared */
/* #undef MISSING_LOCALTIME_R_DECL */

/* */
/* #undef MISSING_MSGHDR_MSGFLAGS */

/* Whether strtok_r is declared */
/* #undef MISSING_STRTOK_R_DECL */

/* Whether mysqlnd is enabled */
/* #undef MYSQLI_USE_MYSQLND */

/* Enable compressed protocol support */
/* #undef MYSQLND_COMPRESSION_WANTED */

/* Enable mysqlnd code that uses OpenSSL directly */
/* #undef MYSQLND_HAVE_SSL */

/* Enable core mysqlnd SSL code */
/* #undef MYSQLND_SSL_SUPPORTED */

/* Whether mysqlnd is enabled */
/* #undef MYSQL_USE_MYSQLND */

/* */
/* #undef NDBM_INCLUDE_FILE */

/* */
/* #undef NEUTRINO */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* The highest supported ODBC version */
#define ODBCVER 0x0300

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* */
#define PDO_MYSQL_UNIX_ADDR "/tmp"

/* Whether pdo_mysql uses mysqlnd */
/* #undef PDO_USE_MYSQLND */

/* */
/* #undef PHAR_HASH_OK */

/* */
/* #undef PHAR_HAVE_OPENSSL */

/* */
/* #undef PHPDBG_DEBUG */

/* */
/* #undef PHP_APACHE_HAVE_CLIENT_FD */

/* Whether the system supports BlowFish salt */
#define PHP_BLOWFISH_CRYPT 1

/* PHP build date */
#define PHP_BUILD_DATE "2019-02-01"

/* Define if your system has fork/vfork/CreateProcess */
#define PHP_CAN_SUPPORT_PROC_OPEN 1

/* Whether the system supports extended DES salt */
#define PHP_EXT_DES_CRYPT 1

/* fpm group name */
#define PHP_FPM_GROUP "nobody"

/* fpm systemd service type */
#define PHP_FPM_SYSTEMD "simple"

/* fpm user name */
#define PHP_FPM_USER "nobody"

/* Checked for stdint types */
#define PHP_HAVE_STDINT_TYPES 1

/* Whether you have HP-UX 10.x */
/* #undef PHP_HPUX_TIME_R */

/* Path to iconv.h */
#define PHP_ICONV_H_PATH </home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/usr/lib/libiconv-stub/include/iconv.h>

/* Which iconv implementation to use */
#define PHP_ICONV_IMPL "glibc"

/* Whether you have IRIX-style functions */
/* #undef PHP_IRIX_TIME_R */

/* Whether the system supports MD5 salt */
#define PHP_MD5_CRYPT 1

/* */
/* #undef PHP_MHASH_BC */

/* */
/* #undef PHP_MYSQL_UNIX_SOCK_ADDR */

/* */
/* #undef PHP_OCI8_DEF_DIR */

/* */
/* #undef PHP_OCI8_DEF_SHARED_LIBADD */

/* define to 1 if oniguruma has an invalid entry for KOI8 encoding */
/* #undef PHP_ONIG_BAD_KOI8_ENTRY */

/* Define to 1 if the bundled oniguruma is used */
#define PHP_ONIG_BUNDLED 1

/* uname output */
#define PHP_OS "Linux"

/* */
/* #undef PHP_PDO_OCI_CLIENT_VERSION */

/* whether pread64 is default */
/* #undef PHP_PREAD_64 */

/* whether pwrite64 is default */
/* #undef PHP_PWRITE_64 */

/* Whether the system supports SHA256 salt */
#define PHP_SHA256_CRYPT 1

/* Whether the system supports SHA512 salt */
#define PHP_SHA512_CRYPT 1

/* */
#define PHP_SIGCHILD 0

/* Whether the system supports standard DES salt */
#define PHP_STD_DES_CRYPT 1

/* uname -a output */
#define PHP_UNAME "Linux lintel-dev-vm 4.15.0-43-generic #46-Ubuntu SMP Thu Dec 6 14:45:28 UTC 2018 x86_64 x86_64 x86_64 GNU/Linux"

/* Whether PHP has to use its own crypt_r for blowfish, des and ext des */
#define PHP_USE_PHP_CRYPT_R 1

/* whether write(2) works */
/* #undef PHP_WRITE_STDOUT */

/* /proc/pid/mem interface */
#define PROC_MEM_FILE "mem"

/* Whether to use Pthreads */
/* #undef PTHREADS */

/* */
/* #undef QDBM_INCLUDE_FILE */

/* */
#define REGEX 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Whether to use Roxen in ZTS mode */
/* #undef ROXEN_USE_ZTS */

/* The size of `char', as computed by sizeof. */
/* #undef SIZEOF_CHAR */

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* Size of intmax_t */
/* #undef SIZEOF_INTMAX_T */

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long int', as computed by sizeof. */
/* #undef SIZEOF_LONG_INT */

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `long long int', as computed by sizeof. */
#define SIZEOF_LONG_LONG_INT 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* Size of ptrdiff_t */
#define SIZEOF_PTRDIFF_T 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* Size of ssize_t */
#define SIZEOF_SSIZE_T 8

/* */
/* #undef SOLARIS */

/* have sqlite3 with column metadata enabled */
/* #undef SQLITE_ENABLE_COLUMN_METADATA */

/* have sqlite3 with extension support */
/* #undef SQLITE_OMIT_LOAD_EXTENSION */

/* Needed in sqlunix.h for wchar defs */
/* #undef SS_FBX */

/* Needed in sqlunix.h */
/* #undef SS_LINUX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* */
/* #undef TCADB_INCLUDE_FILE */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* */
/* #undef TSRM_ST */

/* */
/* #undef UNDEF_THREADS_HACK */

/* */
/* #undef UNIXWARE */

/* whether to check multibyte regex backtrack */
#define USE_COMBINATION_EXPLOSION_CHECK 1

/* */
#define USE_GD_IMGSTRTTF 1

/* */
/* #undef USE_GD_JISX0208 */

/* Define if cross-process locking is required by accept() */
/* #undef USE_LOCKING */

/* Use system default cipher list instead of hardcoded value */
/* #undef USE_OPENSSL_SYSTEM_CIPHERS */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* */
/* #undef USE_TRANSFER_TABLES */

/* whether you want Pi3Web support */
/* #undef WITH_PI3WEB */

/* */
/* #undef WITH_ZEUS */

/* Define if processor uses big-endian word */
/* #undef WORDS_BIGENDIAN */

/* Whether sprintf is broken */
#define ZEND_BROKEN_SPRINTF 0

/* */
#define ZEND_DEBUG 0

/* Define if double cast to long preserves least significant bits */
/* #undef ZEND_DVAL_TO_LVAL_CAST_OK */

/* */
/* #undef ZEND_MM_ALIGNMENT */

/* */
/* #undef ZEND_MM_ALIGNMENT_LOG2 */

/* Use zend signal handling */
/* #undef ZEND_SIGNALS */

/* virtual machine dispatch method */
#define ZEND_VM_KIND ZEND_VM_KIND_CALL

/* */
/* #undef ZTS */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* */
/* #undef in_addr_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to `unsigned int ' if <sys/types.h> does not define. */
/* #undef uint */

/* Define to `unsigned long ' if <sys/types.h> does not define. */
/* #undef ulong */


#ifndef ZEND_ACCONFIG_H_NO_C_PROTOS

#ifdef HAVE_STDLIB_H
# include <stdlib.h>
#endif

#ifdef HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif

#ifdef HAVE_SYS_SELECT_H
#include <sys/select.h>
#endif

#ifdef HAVE_IEEEFP_H
# include <ieeefp.h>
#endif

#ifdef HAVE_STRING_H
# include <string.h>
#else
# include <strings.h>
#endif

#if ZEND_BROKEN_SPRINTF
int zend_sprintf(char *buffer, const char *format, ...);
#else
# define zend_sprintf sprintf
#endif

#include <math.h>

/* To enable the is_nan, is_infinite and is_finite PHP functions */
#ifdef NETWARE
	#define HAVE_ISNAN 1
	#define HAVE_ISINF 1
	#define HAVE_ISFINITE 1
#endif

#ifndef zend_isnan
#ifdef HAVE_ISNAN
#define zend_isnan(a) isnan(a)
#elif defined(HAVE_FPCLASS)
#define zend_isnan(a) ((fpclass(a) == FP_SNAN) || (fpclass(a) == FP_QNAN))
#else
#define zend_isnan(a) 0
#endif
#endif

#ifdef HAVE_ISINF
#define zend_isinf(a) isinf(a)
#elif defined(INFINITY)
/* Might not work, but is required by ISO C99 */
#define zend_isinf(a) (((a)==INFINITY)?1:0)
#elif defined(HAVE_FPCLASS)
#define zend_isinf(a) ((fpclass(a) == FP_PINF) || (fpclass(a) == FP_NINF))
#else
#define zend_isinf(a) 0
#endif

#ifdef HAVE_FINITE
#define zend_finite(a) finite(a)
#elif defined(HAVE_ISFINITE) || defined(isfinite)
#define zend_finite(a) isfinite(a)
#elif defined(fpclassify)
#define zend_finite(a) ((fpclassify((a))!=FP_INFINITE&&fpclassify((a))!=FP_NAN)?1:0)
#else
#define zend_finite(a) (zend_isnan(a) ? 0 : zend_isinf(a) ? 0 : 1)
#endif

#endif /* ifndef ZEND_ACCONFIG_H_NO_C_PROTOS */

#ifdef NETWARE
#ifdef USE_WINSOCK
#/*This detection against winsock is of no use*/ undef HAVE_SOCKLEN_T
#/*This detection against winsock is of no use*/ undef HAVE_SYS_SOCKET_H
#endif
#endif

/* #undef PTHREADS */



#ifndef HAVE_SSIZE_T
#  if SIZEOF_SIZE_T == SIZEOF_INT
typedef int ssize_t;
#  elif SIZEOF_SIZE_T == SIZEOF_LONG
typedef long ssize_t;
#  elif SIZEOF_SIZE_T == SIZEOF_LONG_LONG
typedef long long ssize_t;
#  else
#error no suitable type for ssize_t found
#  endif
#endif

