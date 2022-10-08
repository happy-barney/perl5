
#ifndef Perl__perl_warnings__H
#define Perl__perl_warnings__H

#define PERL_W_ARGUMENT_NUMERIC_IN PERL_W_0001A
#define PERL_W_0001A_INDEX     0001
#define PERL_W_0001A_MESSAGE() "Argument \"%s\" isn't numeric in %s"
#define PERL_W_0001A_ARGS(x)   x.argument, x.location
#define PERL_W_0001A_CLASS()   WARN_NUMERIC
#define PERL_W_0001A_STRUCT()  struct {                                 \
        const char * argument;                                          \
        const char * location;                                          \
    }

#define PERL_W_ARGUMENT_NUMERIC PERL_W_0001B
#define PERL_W_0001B_INDEX     0001
#define PERL_W_0001B_MESSAGE() "Argument \"%s\" isn't numeric"
#define PERL_W_0001B_ARGS(x)   x.argument
#define PERL_W_0001B_CLASS()   WARN_NUMERIC
#define PERL_W_0001B_STRUCT()  struct {                                 \
        const char * argument;                                          \
    }

#define CONCAT2(A, B) A ## _ ## B

#define PERL_WARNING(Id, ...)                                           \
    PERL_WARNING_TRAN (                                                 \
        CONCAT2 (Id, INDEX),                                            \
        CONCAT2 (Id, CLASS),                                            \
        CONCAT2 (Id, MESSAGE),                                          \
        CONCAT2 (Id, STRUCT),                                           \
        CONCAT2 (Id, ARGS),                                             \
        __VA_ARGS__                                                     \
    )

/* Transitional macro is needed to expand possible index macro
 * so we can use its value in symbol concatenation
 */
#define PERL_WARNING_TRAN(Index, Class, Message, Struct, Args, ...)     \
    PERL_WARNING_IMPL(Index, Class, Message, Struct, Args, __VA_ARGS__)

/* Implementation macro
 */
#define PERL_WARNING_IMPL(Index, Class, Message, Struct, Args, ...)     \
    Perl_warner (                                                       \
        aTHX_ packWARN(Class()),                                        \
        "Perl-W" #Index ": " Message(),                                 \
        Args( ((Struct()) { __VA_ARGS__ }) )                            \
    )

#endif
