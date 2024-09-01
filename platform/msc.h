
/* All Microsoft compiler specific definitions go here
 */

#if (! defined (PERL__PLATFORM__MSC__H)) && defined(__MSC_VER)
#   define PERL__PLATFORM__MSC__H

/*  TODO: at the end this file should only file using these macros */
#   define PERL_MSC_VERSION_CMP(Operator, Version)                      \
    (                                                                   \
        __MSC_VER Operator (Version)                                    \
    )

#   define PERL_MSC_VERSION_GE(Version)                                 \
    PERL_MSC_VERSION_CMP (>=, Version)

#   define PERL_MSC_VERSION_GT(Version)                                 \
    PERL_MSC_VERSION_CMP (>, Version)

#   define PERL_MSC_VERSION_LE(Version)                                 \
    PERL_MSC_VERSION_CMP (<=, Version)

#   define PERL_MSC_VERSION_LT(Version)                                 \
    PERL_MSC_VERSION_CMP (<, Version)

#   define PERL_MSC_IS_VS_2005()                                        \
    PERL_MSC_VERSION_GE (1400)

#   define PERL_MSC_IS_VS_2008()                                        \
    PERL_MSC_VERSION_GE (1500)

#   define PERL_MSC_IS_VS_2015()                                        \
    PERL_MSC_VERSION_GE (1900)

#   define PERL_MSC_IS_VS_2017()                                        \
    PERL_MSC_VERSION_GE (1910)

#   define PERL_MSC_IS_VS_2019()                                        \
    PERL_MSC_VERSION_GE (1920)

#   define PERL_MSC_IS_VS_2022()                                        \
    PERL_MSC_VERSION_GE (1930)

#   if PERL_MSC_IS_VS_2005()
#       define __attribute__deprecated__ __declspec(deprecated)
#   endif

#endif
