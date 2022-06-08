/* confdefs.h */
#define PACKAGE_NAME "PostgreSQL"
#define PACKAGE_TARNAME "postgresql"
#define PACKAGE_VERSION "14.3"
#define PACKAGE_STRING "PostgreSQL 14.3"
#define PACKAGE_BUGREPORT "pgsql-bugs@lists.postgresql.org"
#define PACKAGE_URL "https://www.postgresql.org/"
#define CONFIGURE_ARGS ""
#define PG_MAJORVERSION "14"
#define PG_MAJORVERSION_NUM 14
#define PG_MINORVERSION_NUM 3
#define PG_VERSION "14.3"
#define DEF_PGPORT 5432
#define DEF_PGPORT_STR "5432"
#define BLCKSZ 8192
#define RELSEG_SIZE 131072
#define XLOG_BLCKSZ 8192
#define ENABLE_THREAD_SAFETY 1
#define PG_KRB_SRVNAM "postgres"
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_PTHREAD 1
#define HAVE_STRERROR_R 1
#define HAVE_GETPWUID_R 1
#define HAVE_GETHOSTBYNAME_R 1
#define HAVE_LIBM 1
#define HAVE_LIBREADLINE 1
#define HAVE_LIBZ 1
#define HAVE_SPINLOCKS 1
#define HAVE_ATOMICS 1
#define HAVE__BOOL 1
#define HAVE_STDBOOL_H 1
#define HAVE_EXECINFO_H 1
#define HAVE_GETOPT_H 1
#define HAVE_IFADDRS_H 1
#define HAVE_LANGINFO_H 1
#define HAVE_POLL_H 1
#define HAVE_SYS_EPOLL_H 1
#define HAVE_SYS_IPC_H 1
#define HAVE_SYS_PRCTL_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SEM_H 1
#define HAVE_SYS_SHM_H 1
#define HAVE_SYS_SIGNALFD_H 1
#define HAVE_SYS_UIO_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_TERMIOS_H 1
#define HAVE_WCTYPE_H 1
#define HAVE_NET_IF_H 1
#define HAVE_NETINET_TCP_H 1
#define HAVE_READLINE_READLINE_H 1
#define HAVE_READLINE_HISTORY_H 1
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define HAVE_FUNCNAME__FUNC 1
#define HAVE__STATIC_ASSERT 1
#define HAVE_TYPEOF 1
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define HAVE__BUILTIN_CONSTANT_P 1
#define HAVE__BUILTIN_UNREACHABLE 1
#define HAVE_COMPUTED_GOTO 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define HAVE_STRUCT_SOCKADDR_UN 1
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define HAVE_STRUCT_ADDRINFO 1
#define HAVE_LOCALE_T 1
#define restrict __restrict
#define pg_restrict __restrict
#define HAVE_STRUCT_OPTION 1
#define HAVE_X86_64_POPCNTQ 1
#define SIZEOF_OFF_T 8
#define SIZEOF_BOOL 1
#define PG_USE_STDBOOL 1
#define HAVE_INT_TIMEZONE 1
#define ACCEPT_TYPE_RETURN int
#define ACCEPT_TYPE_ARG1 int
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define ACCEPT_TYPE_ARG3 socklen_t
#define HAVE_BACKTRACE_SYMBOLS 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_FDATASYNC 1
#define HAVE_GETIFADDRS 1
#define HAVE_GETRLIMIT 1
#define HAVE_POLL 1
#define HAVE_POSIX_FALLOCATE 1
#define HAVE_PPOLL 1
#define HAVE_READLINK 1
#define HAVE_READV 1
#define HAVE_SETSID 1
#define HAVE_SHM_OPEN 1
#define HAVE_STRCHRNUL 1
#define HAVE_STRSIGNAL 1
#define HAVE_SYMLINK 1
#define HAVE_SYNCFS 1
#define HAVE_SYNC_FILE_RANGE 1
#define HAVE_USELOCALE 1
#define HAVE_WRITEV 1
#define HAVE__BUILTIN_BSWAP16 1
#define HAVE__BUILTIN_BSWAP32 1
#define HAVE__BUILTIN_BSWAP64 1
#define HAVE__BUILTIN_CLZ 1
#define HAVE__BUILTIN_CTZ 1
#define HAVE__BUILTIN_POPCOUNT 1
#define HAVE__BUILTIN_FRAME_ADDRESS 1
#define HAVE_FSEEKO 1
#define HAVE_POSIX_FADVISE 1
#define HAVE_DECL_POSIX_FADVISE 1
#define HAVE_DECL_FDATASYNC 1
#define HAVE_DECL_STRLCAT 0
#define HAVE_DECL_STRLCPY 0
#define HAVE_DECL_STRNLEN 1
#define HAVE_DECL_PREADV 1
#define HAVE_DECL_PWRITEV 1
#define HAVE_DECL_F_FULLFSYNC 0
#define HAVE_DECL_RTLD_GLOBAL 1
#define HAVE_DECL_RTLD_NOW 1
#define HAVE_IPV6 1
#define HAVE_DLOPEN 1
#define HAVE_EXPLICIT_BZERO 1
#define HAVE_GETOPT 1
#define HAVE_GETRUSAGE 1
#define HAVE_INET_ATON 1
#define HAVE_LINK 1
#define HAVE_MKDTEMP 1
#define HAVE_PREAD 1
#define HAVE_PWRITE 1
#define HAVE_RANDOM 1
/* end confdefs.h.  */
/* Define srandom to an innocuous variant, in case <limits.h> declares srandom.
   For example, HP-UX 11i <limits.h> declares gettimeofday.  */
#define srandom innocuous_srandom

/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char srandom (); below.
    Prefer <limits.h> to <assert.h> if __STDC__ is defined, since
    <limits.h> exists even on freestanding compilers.  */

#ifdef __STDC__
# include <limits.h>
#else
# include <assert.h>
#endif

#undef srandom

/* Override any GCC internal prototype to avoid an error.
   Use char because int might match the return type of a GCC
   builtin and then its argument prototype would still apply.  */
#ifdef __cplusplus
extern "C"
#endif
char srandom ();
/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined __stub_srandom || defined __stub___srandom
choke me
#endif

int
main ()
{
return srandom ();
  ;
  return 0;
}
