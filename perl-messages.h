
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
#   define PERL_E1003   "Ambiguous range in transliteration operator"
    /* diag_listed_as: Invalid range "%s" in transliteration operator */
#   define PERL_E1004   "Invalid range \"%c-%c\" in transliteration operator"
    /* diag_listed_as: Invalid range "%s" in transliteration operator */
#   define PERL_E1005   "Invalid range \"\\N{U+%04" UVXf "}-\\N{U+%04" UVXf "}\" in transliteration operator"
    /* diag_listed_as: Invalid range "%s" in transliteration operator */
#   define PERL_E1006   "Invalid range \"\\x{%04" UVXf "}-\\x{%04" UVXf "}\"" " in transliteration operator"

    /* Warnings catalogue */
#   define PERL_W1000   "Prototype after '%c' for %" SVf " : %s"
#   define PERL_W1001   "Missing ']' in prototype for %" SVf " : %s"
#   define PERL_W1002   "Illegal character in prototype for %" SVf " : %s"
#   define PERL_W1003   "Illegal character after '_' in prototype for %" SVf " : %s"
#   define PERL_W1004   "Warning: Use of \"%" UTF8f "\" without parentheses is ambiguous"
#   define PERL_W1005   "Possible unintended interpolation of $\\ in regex"
    /* diag_listed_as: \%d better written as $%d */
#   define PERL_W1006   "\\%c better written as $%c"

    /* Experimental warnings catalogue */

    /* Human readable macros */
#   define PERL_ERROR_STRING_TERMINATOR_EOF     PERL_ERROR_MESSAGE (1000)
#   define PERL_ERROR_LEXER_INTERNAL_ERROR      PERL_ERROR_MESSAGE (1001)
#   define PERL_ERROR_LEXER_MIX_ENCODING        PERL_ERROR_MESSAGE (1002)
#   define PERL_ERROR_TR_AMBIGUOUS_RANGE        PERL_ERROR_MESSAGE (1003)
#   define PERL_ERROR_TR_INVALID_RANGE          PERL_ERROR_MESSAGE (1004)
#   define PERL_ERROR_TR_INVALID_RANGE_UTF8     PERL_ERROR_MESSAGE (1005)
#   define PERL_ERROR_TR_INVALID_RANGE_HEX      PERL_ERROR_MESSAGE (1006)

#   define PERL_WARNING_PROTO_AFTER_GREEDY      PERL_WARNING_MESSAGE (1000)
#   define PERL_WARNING_PROTO_MISSING_RBRACKET  PERL_WARNING_MESSAGE (1001)
#   define PERL_WARNING_PROTO_ILLEGAL           PERL_WARNING_MESSAGE (1002)
#   define PERL_WARNING_PROTO_UNDERSCORE        PERL_WARNING_MESSAGE (1003)
#   define PERL_WARNING_AMBIGUOS_UNIOP          PERL_WARNING_MESSAGE (1004)
#   define PERL_WARNING_INTERPOLATE_ORS         PERL_WARNING_MESSAGE (1005)
#   define PERL_WARNING_CHAR_BETTER_WRITTEN     PERL_WARNING_MESSAGE (1006)

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
