
/* All clang specific definitions go here
 */

#if (! defined (PERL__PLATFORM__CLANG__H)) && defined(__clang__)
#   define PERL__PLATFORM__CLANG__H

/*  TODO: at the end this file should only file using these macros */
#   define PERL_CLANG_VERSION_CMP(Operator, Major, Minor, Patch)        \
    (                                                                   \
        PERL_SEMVER (__clang_major__, __clang_minor__, __clang_patchlevel__) \
        Operator                                                        \
        PERL_SEMVER (Major, Minor, Patch)                               \
    )

#   define PERL_CLANG_VERSION_GE(Major, Minor, Patch)                   \
    PERL_CLANG_VERSION_CMP (>=, Major, Minor, Patch)

#   define PERL_CLANG_VERSION_GT(Major,Minor,Patch)                     \
    PERL_CLANG_VERSION_CMP (>, Major, Minor, Patch)

#   define PERL_CLANG_VERSION_LE(Major, Minor, Patch)                   \
    PERL_CLANG_VERSION_CMP (<=, Major, Minor, Patch)

#   define PERL_CLANG_VERSION_LT(Major,Minor,Patch)                     \
    PERL_CLANG_VERSION_CMP (<, Major, Minor, Patch)

#endif
