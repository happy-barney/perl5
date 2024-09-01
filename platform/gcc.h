
/* All GCC specific definitions go here
 */

/* some compilers impersonate gcc */
#if (! defined (PERL__PLATFORM__GCC__H)) && defined(__GNUC__) && !defined(__clang__) && !defined(__INTEL_COMPILER)
#   define PERL__PLATFORM__GCC__H

#   define PERL_IS_GCC 1

/*  TODO: at the end this file should only file using these macros */
#   define PERL_GCC_VERSION_CMP(Operator, Major, Minor, Patch)          \
    (                                                                   \
        PERL_SEMVER (__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)     \
        Operator                                                        \
        PERL_SEMVER (Major, Minor, Patch)                               \
    )

#   define PERL_GCC_VERSION_GE(Major, Minor, Patch)                     \
    PERL_GCC_VERSION_CMP (>=, Major, Minor, Patch)

#   define PERL_GCC_VERSION_GT(Major,Minor,Patch)                       \
    PERL_GCC_VERSION_CMP (>, Major, Minor, Patch)

#   define PERL_GCC_VERSION_LE(Major, Minor, Patch)                     \
    PERL_GCC_VERSION_CMP (<=, Major, Minor, Patch)

#   define PERL_GCC_VERSION_LT(Major,Minor,Patch)                       \
    PERL_GCC_VERSION_CMP (<, Major, Minor, Patch)

#   if PERL_GCC_VERSION_GE (3, 1, 0)
#      define __attribute__deprecated__ __attribute__((deprecated))
#   endif

#endif
