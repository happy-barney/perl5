
/* This header contains message catalogues
 *
 * PERL_EXXXX ... error
 * PERL_WXXXX ... warning
 * PERL_TXXXX ... "is experimental" warnings
 */

#ifndef PERL_MESSAGE__H
#   define PERL_MESSAGE__H

    /* Errors catalogue */
#   define PERL_E1000   "Can't find string terminator %c%" UTF8f "%c anywhere before EOF"
#   define PERL_E1001   "Lexing code internal error (%s)"
#   define PERL_E1002   "Lexing code attempted to stuff non-Latin-1 character into Latin-1 input"

    /* Warnings catalogue */
#   define PERL_W1000   "Prototype after '%c' for %" SVf " : %s"
#   define PERL_W1001   "Missing ']' in prototype for %" SVf " : %s"

    /* Experimental warnings catalogue */

    /* Human readable macros */
#   define PERL_ERROR_STRING_TERMINATOR_EOF     PERL_ERROR_MESSAGE (1000)
#   define PERL_ERROR_LEXER_INTERNAL_ERROR      PERL_ERROR_MESSAGE (1001)
#   define PERL_ERROR_LEXER_MIX_ENCODING        PERL_ERROR_MESSAGE (1002)

#   define PERL_WARNING_PROTO_AFTER_GREEDY      PERL_WARNING_MESSAGE (1000)
#   define PERL_WARNING_PROTO_MISSING_RBRACKET  PERL_WARNING_MESSAGE (1001)

    /* Supporting macros */

#   define PERL_ERROR_MESSAGE(Id)      PERL_MESSAGE (E, Id)
#   define PERL_WARNING_MESSAGE(Id)    PERL_MESSAGE (W, Id)
#   define PERL_EXPERIMENT_MESSAGE(Id) PERL_MESSAGE (T, Id)

#   ifdef PERL_WITH_MESSAGE_PREFIX
#       define PERL_MESSAGE(Type, Id) "[PERL-" # Type # Id "] " PERL_ ## Type ## Id
#   else
#       define PERL_MESSAGE(Type, Id) PERL_ ## Type ## Id
#   endif

#endif
