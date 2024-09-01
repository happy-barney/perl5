
/* All Oracle Solaris compiler specific definitions go here
 */

#if (! defined (PERL__PLATFORM__SUNPRO__H)) && defined(__SUNPRO_C)
#   define PERL__PLATFORM__SUNPRO__H

/*  TODO: at the end this file should only file using these macros */
#   define PERL_SUNPRO_VERSION_CMP(Operator, Version)                    \
    (                                                                   \
        __SUNPRO_C Operator (Version)                             \
    )

#   define PERL_SUNPRO_VERSION_GE(Version)                               \
    PERL_SUNPRO_VERSION_CMP (>=, Version)

#   define PERL_SUNPRO_VERSION_GT(Version)                               \
    PERL_SUNPRO_VERSION_CMP (>, Version)

#   define PERL_SUNPRO_VERSION_LE(Version)                               \
    PERL_SUNPRO_VERSION_CMP (<=, Version)

#   define PERL_SUNPRO_VERSION_LT(Version)                              \
    PERL_SUNPRO_VERSION_CMP (<, Version)

#   define PERL_SUNPRO_IS_12_2()                                         \
    PERL_SUNPRO_VERSION_GE (0x5110)

#endif
