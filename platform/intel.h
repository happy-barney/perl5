
/* All Intel compiler specific definitions go here
 */

#if (! defined (PERL__PLATFORM__INTEL__H)) && defined(__INTEL_COMPILER)
#   define PERL__PLATFORM__INTEL__H

/*  TODO: at the end this file should only file using these macros */
#   define PERL_INTEL_VERSION_CMP(Operator, Version)                    \
    (                                                                   \
        __INTEL_COMPILER Operator (Version)                             \
    )

#   define PERL_INTEL_VERSION_GE(Version)                               \
    PERL_INTEL_VERSION_CMP (>=, Version)

#   define PERL_INTEL_VERSION_GT(Version)                               \
    PERL_INTEL_VERSION_CMP (>, Version)

#   define PERL_INTEL_VERSION_LE(Version)                               \
    PERL_INTEL_VERSION_CMP (<=, Version)

#   define PERL_INTEL_VERSION_LT(Version)                               \
    PERL_INTEL_VERSION_CMP (<, Version)

#endif
