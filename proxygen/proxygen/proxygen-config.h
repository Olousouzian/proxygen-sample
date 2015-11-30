#ifndef _PROXYGEN_CONFIG_H
#define _PROXYGEN_CONFIG_H 1
 
/* proxygen-config.h. Generated automatically at end of configure. */
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to "final" if the compiler supports C++11 "final" */
#ifndef PROXYGEN_FINAL
#define PROXYGEN_FINAL final
#endif

/* Define to 1 if you have the <arpa/inet.h> header file. */
#ifndef PROXYGEN_HAVE_ARPA_INET_H
#define PROXYGEN_HAVE_ARPA_INET_H 1
#endif

/* define if the Boost library is available */
#ifndef PROXYGEN_HAVE_BOOST
#define PROXYGEN_HAVE_BOOST /**/
#endif

/* Define to 1 if we support clock_gettime(2). */
#ifndef PROXYGEN_HAVE_CLOCK_GETTIME
#define PROXYGEN_HAVE_CLOCK_GETTIME 1
#endif

/* Define to 1 if strlen(3) is constexpr. */
#ifndef PROXYGEN_HAVE_CONSTEXPR_STRLEN
#define PROXYGEN_HAVE_CONSTEXPR_STRLEN 1
#endif

/* Define to 1 if we have cplus_demangle_v3_callback. */
#ifndef PROXYGEN_HAVE_CPLUS_DEMANGLE_V3_CALLBACK
#define PROXYGEN_HAVE_CPLUS_DEMANGLE_V3_CALLBACK 1
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef PROXYGEN_HAVE_DLFCN_H
#define PROXYGEN_HAVE_DLFCN_H 1
#endif

/* Define to 1 if you have the `dup2' function. */
#ifndef PROXYGEN_HAVE_DUP2
#define PROXYGEN_HAVE_DUP2 1
#endif

/* Define to 1 if you have the <fcntl.h> header file. */
#ifndef PROXYGEN_HAVE_FCNTL_H
#define PROXYGEN_HAVE_FCNTL_H 1
#endif

/* Define to 1 if you have the `fork' function. */
#ifndef PROXYGEN_HAVE_FORK
#define PROXYGEN_HAVE_FORK 1
#endif

/* Define to 1 if you have the `ftruncate' function. */
#ifndef PROXYGEN_HAVE_FTRUNCATE
#define PROXYGEN_HAVE_FTRUNCATE 1
#endif

/* Define to 1 if you have the `gettimeofday' function. */
#ifndef PROXYGEN_HAVE_GETTIMEOFDAY
#define PROXYGEN_HAVE_GETTIMEOFDAY 1
#endif

/* Define to 0 if the compiler doesn't support ifunc */
#ifndef PROXYGEN_HAVE_IFUNC
#define PROXYGEN_HAVE_IFUNC 1
#endif

/* Define if __int128 does not exist */
#ifndef PROXYGEN_HAVE_INT128_T
#define PROXYGEN_HAVE_INT128_T 1
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef PROXYGEN_HAVE_INTTYPES_H
#define PROXYGEN_HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the `cap' library (-lcap). */
#ifndef PROXYGEN_HAVE_LIBCAP
#define PROXYGEN_HAVE_LIBCAP 1
#endif

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#ifndef PROXYGEN_HAVE_LIBCRYPTO
#define PROXYGEN_HAVE_LIBCRYPTO 1
#endif

/* Define to 1 if you have the `event' library (-levent). */
#ifndef PROXYGEN_HAVE_LIBEVENT
#define PROXYGEN_HAVE_LIBEVENT 1
#endif

/* Define to 1 if you have the `folly' library (-lfolly). */
#ifndef PROXYGEN_HAVE_LIBFOLLY
#define PROXYGEN_HAVE_LIBFOLLY 1
#endif

/* Define to 1 if you have the `gflags' library (-lgflags). */
#ifndef PROXYGEN_HAVE_LIBGFLAGS
#define PROXYGEN_HAVE_LIBGFLAGS 1
#endif

/* Define to 1 if you have the `glog' library (-lglog). */
#ifndef PROXYGEN_HAVE_LIBGLOG
#define PROXYGEN_HAVE_LIBGLOG 1
#endif

/* Define to 1 if you have the `ssl' library (-lssl). */
#ifndef PROXYGEN_HAVE_LIBSSL
#define PROXYGEN_HAVE_LIBSSL 1
#endif

/* Define to 1 if you have the `wangle' library (-lwangle). */
#ifndef PROXYGEN_HAVE_LIBWANGLE
#define PROXYGEN_HAVE_LIBWANGLE 1
#endif

/* Define to 1 if you have the `z' library (-lz). */
#ifndef PROXYGEN_HAVE_LIBZ
#define PROXYGEN_HAVE_LIBZ 1
#endif

/* Define to 1 if you have the <limits.h> header file. */
#ifndef PROXYGEN_HAVE_LIMITS_H
#define PROXYGEN_HAVE_LIMITS_H 1
#endif

/* Define to 1 if you have the `localtime_r' function. */
#ifndef PROXYGEN_HAVE_LOCALTIME_R
#define PROXYGEN_HAVE_LOCALTIME_R 1
#endif

/* Define to 1 if you have the <malloc.h> header file. */
#ifndef PROXYGEN_HAVE_MALLOC_H
#define PROXYGEN_HAVE_MALLOC_H 1
#endif

/* Define to 1 if you have the `memchr' function. */
#ifndef PROXYGEN_HAVE_MEMCHR
#define PROXYGEN_HAVE_MEMCHR 1
#endif

/* Define to 1 if you have the <memory.h> header file. */
#ifndef PROXYGEN_HAVE_MEMORY_H
#define PROXYGEN_HAVE_MEMORY_H 1
#endif

/* Define to 1 if you have the `memset' function. */
#ifndef PROXYGEN_HAVE_MEMSET
#define PROXYGEN_HAVE_MEMSET 1
#endif

/* Define to 1 if you have the `mkdir' function. */
#ifndef PROXYGEN_HAVE_MKDIR
#define PROXYGEN_HAVE_MKDIR 1
#endif

/* Define to 1 if you have the <netdb.h> header file. */
#ifndef PROXYGEN_HAVE_NETDB_H
#define PROXYGEN_HAVE_NETDB_H 1
#endif

/* Define to 1 if the system has the type `ptrdiff_t'. */
#ifndef PROXYGEN_HAVE_PTRDIFF_T
#define PROXYGEN_HAVE_PTRDIFF_T 1
#endif

/* Define to 1 if you have the `socket' function. */
#ifndef PROXYGEN_HAVE_SOCKET
#define PROXYGEN_HAVE_SOCKET 1
#endif

/* Whether static_assert can be used or not */
#ifndef PROXYGEN_HAVE_STATIC_ASSERT
#define PROXYGEN_HAVE_STATIC_ASSERT 1
#endif

/* Define to 1 if stdbool.h conforms to C99. */
#ifndef PROXYGEN_HAVE_STDBOOL_H
#define PROXYGEN_HAVE_STDBOOL_H 1
#endif

/* Define if g++ supports C++0x features. */
#ifndef PROXYGEN_HAVE_STDCXX_0X
#define PROXYGEN_HAVE_STDCXX_0X /**/
#endif

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef PROXYGEN_HAVE_STDINT_H
#define PROXYGEN_HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef PROXYGEN_HAVE_STDLIB_H
#define PROXYGEN_HAVE_STDLIB_H 1
#endif

/* Define to 1 if we have a usable std::is_trivially_copyable<T>
   implementation. */
/* #undef HAVE_STD__IS_TRIVIALLY_COPYABLE */

/* Define to 1 if std::this_thread::sleep_for() is defined. */
#ifndef PROXYGEN_HAVE_STD__THIS_THREAD__SLEEP_FOR
#define PROXYGEN_HAVE_STD__THIS_THREAD__SLEEP_FOR 1
#endif

/* Define to 1 if you have the `strcasecmp' function. */
#ifndef PROXYGEN_HAVE_STRCASECMP
#define PROXYGEN_HAVE_STRCASECMP 1
#endif

/* Define to 1 if you have the `strdup' function. */
#ifndef PROXYGEN_HAVE_STRDUP
#define PROXYGEN_HAVE_STRDUP 1
#endif

/* Define to 1 if you have the `strerror' function. */
#ifndef PROXYGEN_HAVE_STRERROR
#define PROXYGEN_HAVE_STRERROR 1
#endif

/* Define to 1 if you have the <strings.h> header file. */
#ifndef PROXYGEN_HAVE_STRINGS_H
#define PROXYGEN_HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef PROXYGEN_HAVE_STRING_H
#define PROXYGEN_HAVE_STRING_H 1
#endif

/* Define to 1 if you have the `strtol' function. */
#ifndef PROXYGEN_HAVE_STRTOL
#define PROXYGEN_HAVE_STRTOL 1
#endif

/* Define to 1 if you have the <syslog.h> header file. */
#ifndef PROXYGEN_HAVE_SYSLOG_H
#define PROXYGEN_HAVE_SYSLOG_H 1
#endif

/* Define to 1 if you have the <sys/file.h> header file. */
#ifndef PROXYGEN_HAVE_SYS_FILE_H
#define PROXYGEN_HAVE_SYS_FILE_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef PROXYGEN_HAVE_SYS_STAT_H
#define PROXYGEN_HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef PROXYGEN_HAVE_SYS_TIME_H
#define PROXYGEN_HAVE_SYS_TIME_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef PROXYGEN_HAVE_SYS_TYPES_H
#define PROXYGEN_HAVE_SYS_TYPES_H 1
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef PROXYGEN_HAVE_UNISTD_H
#define PROXYGEN_HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the `vfork' function. */
#ifndef PROXYGEN_HAVE_VFORK
#define PROXYGEN_HAVE_VFORK 1
#endif

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if the linker supports weak symbols. */
#ifndef PROXYGEN_HAVE_WEAK_SYMBOLS
#define PROXYGEN_HAVE_WEAK_SYMBOLS 1
#endif

/* Define to 1 if `fork' works. */
#ifndef PROXYGEN_HAVE_WORKING_FORK
#define PROXYGEN_HAVE_WORKING_FORK 1
#endif

/* Define to 1 if `vfork' works. */
#ifndef PROXYGEN_HAVE_WORKING_VFORK
#define PROXYGEN_HAVE_WORKING_VFORK 1
#endif

/* Define to 1 if the system has the type `_Bool'. */
/* #undef HAVE__BOOL */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#ifndef PROXYGEN_LT_OBJDIR
#define PROXYGEN_LT_OBJDIR ".libs/"
#endif

/* Define to "override" if the compiler supports C++11 "override" */
#ifndef PROXYGEN_OVERRIDE
#define PROXYGEN_OVERRIDE override
#endif

/* Name of package */
#ifndef PROXYGEN_PACKAGE
#define PROXYGEN_PACKAGE "proxygen"
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef PROXYGEN_PACKAGE_BUGREPORT
#define PROXYGEN_PACKAGE_BUGREPORT ""
#endif

/* Define to the full name of this package. */
#ifndef PROXYGEN_PACKAGE_NAME
#define PROXYGEN_PACKAGE_NAME "proxygen"
#endif

/* Define to the full name and version of this package. */
#ifndef PROXYGEN_PACKAGE_STRING
#define PROXYGEN_PACKAGE_STRING "proxygen 32.0"
#endif

/* Define to the one symbol short name of this package. */
#ifndef PROXYGEN_PACKAGE_TARNAME
#define PROXYGEN_PACKAGE_TARNAME "proxygen"
#endif

/* Define to the home page for this package. */
#ifndef PROXYGEN_PACKAGE_URL
#define PROXYGEN_PACKAGE_URL ""
#endif

/* Define to the version of this package. */
#ifndef PROXYGEN_PACKAGE_VERSION
#define PROXYGEN_PACKAGE_VERSION "32.0"
#endif

/* Define to 1 if you have the ANSI C header files. */
#ifndef PROXYGEN_STDC_HEADERS
#define PROXYGEN_STDC_HEADERS 1
#endif

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#ifndef PROXYGEN_TIME_WITH_SYS_TIME
#define PROXYGEN_TIME_WITH_SYS_TIME 1
#endif

/* Define to 1 if we're using libc++. */
/* #undef USE_LIBCPP */

/* Version number of package */
#ifndef PROXYGEN_VERSION
#define PROXYGEN_VERSION "32.0"
#endif

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */
 
/* once: _PROXYGEN_CONFIG_H */
#endif
