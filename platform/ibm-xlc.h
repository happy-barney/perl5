
/* All IBM XL C specific definitions go here
 */

#if (! defined (PERL__PLATFORM__IBM_XLC__H)) && defined(__xlC__)
#   define PERL__PLATFORM__IBM_XLC__H

/*  TODO: at the end this file should only file using these macros */
#   define PERL_IBM_XLC_VERSION_CMP(Operator, Version)                  \
    (                                                                   \
        __IBM_XLC_COMPILER Operator (Version)                           \
    )

#   define PERL_IBM_XLC_VERSION_GE(Version)                             \
    PERL_IBM_XLC_VERSION_CMP (>=, Version)

#   define PERL_IBM_XLC_VERSION_GT(Version)                             \
    PERL_IBM_XLC_VERSION_CMP (>, Version)

#   define PERL_IBM_XLC_VERSION_LE(Version)                             \
    PERL_IBM_XLC_VERSION_CMP (<=, Version)

#   define PERL_IBM_XLC_VERSION_LT(Version)                             \
    PERL_IBM_XLC_VERSION_CMP (<, Version)

#   define PERL_IBM_XLC_IS_VERSION_10_1()                               \
    PERL_IBM_XLC_VERSION_GT (0x0A01)

#endif
