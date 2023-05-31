
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
#   define PERL_E1007   "Source filters apply only to byte streams"
    /* diag_listed_as: Missing name in "%s sub" */
#   define PERL_E1008   "Missing name in \"%s\""
#   define PERL_E1009   "Prototype not terminated"
#   define PERL_E1010   "Illegal declaration of anonymous subroutine"
#   define PERL_E1011   "Illegal declaration of subroutine %" SVf
#   define PERL_E1012   "dump() must be written as CORE::dump() as of Perl 5.30"
#   define PERL_E1013   "Use of := for an empty attribute list is not allowed"
#   define PERL_E1014   "Unterminated attribute parameter in attribute list"
#   define PERL_E1015   "Subroutine attributes must come before the signature"
#   define PERL_E1016   "Unrecognized character %s; marked by <-- HERE after %" UTF8f "<-- HERE near column %d"
#   define PERL_E1017   "Missing $ on loop variable"
#   define PERL_E1018   "The experimental declared_refs feature is not enabled"
#   define PERL_E1019   "Can't exec %s"
#   define PERL_E1020   "Too late for \"-%.*s\" option"
#   define PERL_E1021   "CORE::%" UTF8f " is not a keyword"
#   define PERL_E1022   "Bad plugin affecting keyword '%s'"
#   define PERL_E1023   "Bad infix plugin result (%zd) - did not consume entire identifier <%s>\n"
#   define PERL_E1024   "\t(Maybe you didn't strip carriage returns after a network transfer?)\n"
#   define PERL_E1025   "Bad evalled substitution pattern"
#   define PERL_E1026   "Sequence (?{...}) not terminated with ')'"
#   define PERL_E1027   "No comma allowed after %s"
#   define PERL_E1028   "Identifier too long"
#   define PERL_E1029   "Numeric variables with more than one digit may not start with '0'"
#   define PERL_E1030   "Search pattern not terminated"
#   define PERL_E1031   "Substitution pattern not terminated"
#   define PERL_E1032   "Substitution replacement not terminated"
#   define PERL_E1033   "Transliteration pattern not terminated"
#   define PERL_E1034   "Transliteration replacement not terminated"
#   define PERL_E1035   "Unterminated delimiter for here document"
#   define PERL_E1036   "Use of bare << to mean <<\"\" is forbidden"
#   define PERL_E1037   "Delimiter for here document is too long"
#   define PERL_E1038   "Indentation on line %d of here-doc doesn't match delimiter"
#   define PERL_E1039   "Excessively long <> operator"
#   define PERL_E1040   "Unterminated <> operator"
#   define PERL_E1041   "Glob not terminated"
#   define PERL_E1042   "%" SVf "%s had compilation errors.\n"
#   define PERL_E1043   "%s had compilation errors.\n"
#   define PERL_E1044   "%" SVf "Execution of %s aborted due to compilation errors.\n"
#   define PERL_E1045   "Execution of %s aborted due to compilation errors.\n"
#   define PERL_E1046   "Unsupported script encoding %s"
#   define PERL_E1047   "Can't undef active subroutine"
#   define PERL_E1048   "Constants from lexical variables potentially modified elsewhere are no longer permitted"
#   define PERL_E1049   "Malformed UTF-8 string in '%c' format in unpack"
#   define PERL_E1050   "Malformed UTF-8 string in pack"
#   define PERL_E1051   "Within []-length '%c' not allowed in %s"
#   define PERL_E1052   "Invalid type '%c' in %s"
#   define PERL_E1053   "'X' outside of string in %s"
#   define PERL_E1054   "Mismatched brackets in template"
#   define PERL_E1055   "No group ending character '%c' found in template"
#   define PERL_E1056   "pack/unpack repeat count overflow"
#   define PERL_E1057   "()-group starts with a count in %s"
#   define PERL_E1058   "Too deeply nested ()-groups in %s"

    /* Warnings catalogue */
#   define PERL_W1000   "Prototype after '%c' for %" SVf " : %s"
#   define PERL_W1001   "Missing ']' in prototype for %" SVf " : %s"
#   define PERL_W1002   "Illegal character in prototype for %" SVf " : %s"
#   define PERL_W1003   "Illegal character after '_' in prototype for %" SVf " : %s"
#   define PERL_W1004   "Warning: Use of \"%" UTF8f "\" without parentheses is ambiguous"
#   define PERL_W1005   "Possible unintended interpolation of $\\ in regex"
    /* diag_listed_as: \%d better written as $%d */
#   define PERL_W1006   "\\%c better written as $%c"
#   define PERL_W1007   "Unrecognized escape \\%c passed through"
#   define PERL_W1008   "Multidimensional syntax %" UTF8f " not supported"
#   define PERL_W1009   "You need to quote \"%" UTF8f "\""
#   define PERL_W1010   "Useless use of \\E"
#   define PERL_W1011   "Ambiguous call resolved as CORE::%s(), qualify as such or use &"
#   define PERL_W1012   "Possible attempt to separate words with commas"
#   define PERL_W1013   "Possible attempt to put comments in qw() list"
#   define PERL_W1014   "Semicolon seems to be missing"
#   define PERL_W1015   "!=~ should be !~"
#   define PERL_W1016   "Smartmatch is deprecated"
#   define PERL_W1017   "Can't use \\%c to mean $%c in expression"
#   define PERL_W1018   "Operator or semicolon missing before %c%" UTF8f
#   define PERL_W1019   "Ambiguous use of %c resolved as operator %c"
#   define PERL_W1020   "Unquoted string \"%s\" may clash with future reserved word"
#   define PERL_W1021   "Bareword \"%" UTF8f "\" refers to nonexistent package"
#   define PERL_W1022   "given is deprecated"
#   define PERL_W1023   "Precedence problem: open %" UTF8f " should be open(%" UTF8f ")"
#   define PERL_W1024   "when is deprecated"
#   define PERL_W1025   "Illegal character \\%03o (carriage return)"
#   define PERL_W1026   "Reversed %c= operator"
#   define PERL_W1027   "Possible unintended interpolation of %" UTF8f " in string"
#   define PERL_W1028   "%s (...) interpreted as function"
#   define PERL_W1029   "Old package separator used in string"
#   define PERL_W1030   "Old package separator \"'\" deprecated"
#   define PERL_W1031   "Ambiguous use of %c{%s%s} resolved to %c%s%s"
#   define PERL_W1032   "Ambiguous use of %c{%" SVf "} resolved to %c%" SVf
#   define PERL_W1033   "Use of /c modifier is meaningless without /g"
#   define PERL_W1034   "Use of /c modifier is meaningless in s///"
#   define PERL_W1035   "Use of '%" UTF8f "' is deprecated as a string delimiter"
#   define PERL_W1036   "Misplaced _ in number"
#   define PERL_W1037   "Integer overflow in %s number"
#   define PERL_W1038   "Hexadecimal float: exponent underflow"
#   define PERL_W1039   "Hexadecimal float: exponent overflow"
#   define PERL_W1040   "Hexadecimal float: mantissa overflow"
#   define PERL_W1041   "%s number > %s non-portable"
#   define PERL_W1042   "Number too long"
#   define PERL_W1043   "\"%s\" %s %" PNf " masks earlier declaration in same %s"
#   define PERL_W1044   "\"our\" variable %" PNf " redeclared"
#   define PERL_W1045   "%s \"%" PNf "\" is not available"
#   define PERL_W1046   "%s \"%" UTF8f "\" will not stay shared"
#   define PERL_W1047   "%" PNf " never introduced"
#   define PERL_W1048   "Character in '%c' format wrapped in unpack"
#   define PERL_W1049   "Character(s) in '%c' format wrapped in %s"
#   define PERL_W1050   "Invalid type '%c' in %s"

    /* Experimental warnings catalogue */
#   define PERL_T1000   "for my (...) is experimental"
#   define PERL_T1001   "Declaring references is experimental"
#   define PERL_T1002   "ADJUST is experimental"
#   define PERL_T1003   "method is experimental"
#   define PERL_T1004   "try/catch is experimental"
#   define PERL_T1005   "class is experimental"
#   define PERL_T1006   "defer is experimental"
#   define PERL_T1007   "field is experimental"
#   define PERL_T1008   "try/catch/finally is experimental"
#   define PERL_T1009   "Use of '%" UTF8f "' is experimental as a string delimiter"
#   define PERL_T1010   ":const is experimental"
#   define PERL_T1011   ":const is not permitted on named subroutines"

    /* Human readable macros */
#   define PERL_ERROR_STRING_TERMINATOR_EOF     PERL_ERROR_MESSAGE (1000)
#   define PERL_ERROR_LEXER_INTERNAL_ERROR      PERL_ERROR_MESSAGE (1001)
#   define PERL_ERROR_LEXER_MIX_ENCODING        PERL_ERROR_MESSAGE (1002)
#   define PERL_ERROR_TR_AMBIGUOUS_RANGE        PERL_ERROR_MESSAGE (1003)
#   define PERL_ERROR_TR_INVALID_RANGE          PERL_ERROR_MESSAGE (1004)
#   define PERL_ERROR_TR_INVALID_RANGE_UTF8     PERL_ERROR_MESSAGE (1005)
#   define PERL_ERROR_TR_INVALID_RANGE_HEX      PERL_ERROR_MESSAGE (1006)
#   define PERL_ERROR_SOURCE_FILTER_BYTE        PERL_ERROR_MESSAGE (1007)
#   define PERL_ERROR_MISSING_NAME_IN_SUB       PERL_ERROR_MESSAGE (1008)
#   define PERL_ERROR_PROTO_NOT_TERMINATED      PERL_ERROR_MESSAGE (1009)
#   define PERL_ERROR_SUB_ILLEGAL_ANONYMOUS     PERL_ERROR_MESSAGE (1010)
#   define PERL_ERROR_SUB_ILLEGAL               PERL_ERROR_MESSAGE (1011)
#   define PERL_ERROR_DUMP_V5_30                PERL_ERROR_MESSAGE (1012)
#   define PERL_ERROR_EMPTY_ATTRIBUTE_LIST      PERL_ERROR_MESSAGE (1013)
#   define PERL_ERROR_ATTRIBUTE_NOT_TERMINATED  PERL_ERROR_MESSAGE (1014)
#   define PERL_ERROR_ATTRIBUTES_SIGNATURE      PERL_ERROR_MESSAGE (1015)
#   define PERL_ERROR_UNRECOGNIZED_CHARACTER    PERL_ERROR_MESSAGE (1016)
#   define PERL_ERROR_DOLLAR_ON_LOOP_VARIABLE   PERL_ERROR_MESSAGE (1017)
#   define PERL_ERROR_DECLARED_REFS_NOT_ENABLED PERL_ERROR_MESSAGE (1018)
#   define PERL_ERROR_CANT_EXEC                 PERL_ERROR_MESSAGE (1019)
#   define PERL_ERROR_TOO_LATE_FOR_OPTION       PERL_ERROR_MESSAGE (1020)
#   define PERL_ERROR_CORE_IS_NOT_KEYWORD       PERL_ERROR_MESSAGE (1021)
#   define PERL_ERROR_BAD_PLUGIN_KEYWORD        PERL_ERROR_MESSAGE (1022)
#   define PERL_ERROR_BAD_PLUGIN_INFIX          PERL_ERROR_MESSAGE (1023)
#   define PERL_ERROR_STRIP_CR_HINT             PERL_ERROR_MESSAGE (1024)
#   define PERL_ERROR_BAD_SUBST_PATTERN         PERL_ERROR_MESSAGE (1025)
#   define PERL_ERROR_RE_UNTERMINATED_CODE      PERL_ERROR_MESSAGE (1026)
#   define PERL_ERROR_COMMA_NOT_ALLOWED         PERL_ERROR_MESSAGE (1027)
#   define PERL_ERROR_IDENTIFIER_TOO_LONG       PERL_ERROR_MESSAGE (1028)
#   define PERL_ERROR_ZERO_NUMERIC_VARIABLE     PERL_ERROR_MESSAGE (1029)
#   define PERL_ERROR_UNTERMINATED_SEARCH       PERL_ERROR_MESSAGE (1030)
#   define PERL_ERROR_UNTERMINATED_SUBST        PERL_ERROR_MESSAGE (1031)
#   define PERL_ERROR_UNTERMINATED_REPLACEMENT  PERL_ERROR_MESSAGE (1032)
#   define PERL_ERROR_UNTERMINATED_TRANS        PERL_ERROR_MESSAGE (1033)
#   define PERL_ERROR_UNTERMINATED_TRANS_REPL   PERL_ERROR_MESSAGE (1034)
#   define PERL_ERROR_UNTERMINATED_HEREDOC_DELIM PERL_ERROR_MESSAGE (1035)
#   define PERL_ERROR_BARE_HEREDOC_PROHIBITED   PERL_ERROR_MESSAGE (1036)
#   define PERL_ERROR_HEREDOC_DELIM_TOO_LONG    PERL_ERROR_MESSAGE (1037)
#   define PERL_ERROR_HEREDOC_INDENT_DONT_MATCH PERL_ERROR_MESSAGE (1038)
#   define PERL_ERROR_DIAMOND_OP_TOO_LONG       PERL_ERROR_MESSAGE (1039)
#   define PERL_ERROR_DIAMOND_OP_UNTERMINATED   PERL_ERROR_MESSAGE (1040)
#   define PERL_ERROR_GLOB_NOT_TERMINATED       PERL_ERROR_MESSAGE (1041)
#   define PERL_ERROR_COMPILATION_SV            PERL_ERROR_MESSAGE (1042)
#   define PERL_ERROR_COMPILATION               PERL_ERROR_MESSAGE (1043)
#   define PERL_ERROR_EXECUTION_ABORTED_SV      PERL_ERROR_MESSAGE (1044)
#   define PERL_ERROR_EXECUTION_ABORTED         PERL_ERROR_MESSAGE (1045)
#   define PERL_ERROR_UNSUPPORTED_ENCODING      PERL_ERROR_MESSAGE (1046)
#   define PERL_ERROR_CANNOT_UNDEF_SUB          PERL_ERROR_MESSAGE (1047)
#   define PERL_ERROR_CONSTANTS_MODIFIED        PERL_ERROR_MESSAGE (1048)
#   define PERL_ERROR_UNPACK_MALFORMED_UTF8     PERL_ERROR_MESSAGE (1049)
#   define PERL_ERROR_PACK_MALFORMED_UTF8       PERL_ERROR_MESSAGE (1050)
#   define PERL_ERROR_PACK_LENGTH_NOT_ALLOWED   PERL_ERROR_MESSAGE (1051)
#   define PERL_ERROR_PACK_INVALID_TYPE         PERL_ERROR_MESSAGE (1052)
#   define PERL_ERROR_PACK_X_OUTSIDE_OF_STRING  PERL_ERROR_MESSAGE (1053)
#   define PERL_ERROR_PACK_MISMATCHED_BRACKETS  PERL_ERROR_MESSAGE (1054)
#   define PERL_ERROR_PACK_NO_GROUP_END_CHAR    PERL_ERROR_MESSAGE (1055)
#   define PERL_ERROR_REPEAT_COUNT_OVERFLOW     PERL_ERROR_MESSAGE (1056)
#   define PERL_ERROR_PACK_GROUP_STARTS_COUNT   PERL_ERROR_MESSAGE (1057)
#   define PERL_ERROR_PACK_GROUPS_TOO_DEEP      PERL_ERROR_MESSAGE (1058)

#   define PERL_WARNING_PROTO_AFTER_GREEDY      PERL_WARNING_MESSAGE (1000)
#   define PERL_WARNING_PROTO_MISSING_RBRACKET  PERL_WARNING_MESSAGE (1001)
#   define PERL_WARNING_PROTO_ILLEGAL           PERL_WARNING_MESSAGE (1002)
#   define PERL_WARNING_PROTO_UNDERSCORE        PERL_WARNING_MESSAGE (1003)
#   define PERL_WARNING_AMBIGUOS_UNIOP          PERL_WARNING_MESSAGE (1004)
#   define PERL_WARNING_INTERPOLATE_ORS         PERL_WARNING_MESSAGE (1005)
#   define PERL_WARNING_CHAR_BETTER_WRITTEN     PERL_WARNING_MESSAGE (1006)
#   define PERL_WARNING_UNRECOGNIZED_ESCAPE     PERL_WARNING_MESSAGE (1007)
#   define PERL_WARNING_MULTIDIMENSIONAL_SYNTAX PERL_WARNING_MESSAGE (1008)
#   define PERL_WARNING_NEED_TO_QUOTE           PERL_WARNING_MESSAGE (1009)
#   define PERL_WARNING_USELESS_USE_OF_E        PERL_WARNING_MESSAGE (1010)
#   define PERL_WARNING_AMBIGUOUS_CORE_CALL     PERL_WARNING_MESSAGE (1011)
#   define PERL_WARNING_QW_COMMA                PERL_WARNING_MESSAGE (1012)
#   define PERL_WARNING_QW_COMMENT              PERL_WARNING_MESSAGE (1013)
#   define PERL_WARNING_MISSING_SEMICOLON       PERL_WARNING_MESSAGE (1014)
#   define PERL_WARNING_NEGATIVE_BINDING        PERL_WARNING_MESSAGE (1015)
#   define PERL_WARNING_DEPRECATED_SMARTMATCH   PERL_WARNING_MESSAGE (1016)
#   define PERL_WARNING_BACKSLASH_NUMBER        PERL_WARNING_MESSAGE (1017)
#   define PERL_WARNING_OPERATOR_OR_SEMICOLON   PERL_WARNING_MESSAGE (1018)
#   define PERL_WARNING_AMBIGUOUS_OPERATOR      PERL_WARNING_MESSAGE (1019)
#   define PERL_WARNING_RESERVED_WORD           PERL_WARNING_MESSAGE (1020)
#   define PERL_WARNING_NONEXISTENT_PACKAGE     PERL_WARNING_MESSAGE (1021)
#   define PERL_WARNING_DEPRECATED_GIVEN        PERL_WARNING_MESSAGE (1022)
#   define PERL_WARNING_PRECEDENCE_OPEN         PERL_WARNING_MESSAGE (1023)
#   define PERL_WARNING_DEPRECATED_WHEN         PERL_WARNING_MESSAGE (1024)
#   define PERL_WARNING_ILLEGAL_CR              PERL_WARNING_MESSAGE (1025)
#   define PERL_WARNING_REVERSED_OPERATOR       PERL_WARNING_MESSAGE (1026)
#   define PERL_WARNING_UNINTENDED_INTERPOLATE  PERL_WARNING_MESSAGE (1027)
#   define PERL_WARNING_INTERPRETED_AS_FUNCTION PERL_WARNING_MESSAGE (1028)
#   define PERL_WARNING_OLD_PACKAGE_IN_STRING   PERL_WARNING_MESSAGE (1029)
#   define PERL_WARNING_OLD_PACKAGE_DEPRECATED  PERL_WARNING_MESSAGE (1030)
#   define PERL_WARNING_AMBIGUOUS_DEREFERENCE   PERL_WARNING_MESSAGE (1031)
#   define PERL_WARNING_AMBIGUOUS_DEREFERENCESV PERL_WARNING_MESSAGE (1032)
#   define PERL_WARNING_RE_USELESS_USE_OF_C     PERL_WARNING_MESSAGE (1033)
#   define PERL_WARNING_RE_SUBST_USE_OF_C       PERL_WARNING_MESSAGE (1034)
#   define PERL_WARNING_DEPRECATED_STR_DELIM    PERL_WARNING_MESSAGE (1035)
#   define PERL_WARNING_MISPLACED_UNDERSCORE    PERL_WARNING_MESSAGE (1036)
#   define PERL_WARNING_INTEGER_OVERFLOW        PERL_WARNING_MESSAGE (1037)
#   define PERL_WARNING_HEX_EXPONENT_UNDERFLOW  PERL_WARNING_MESSAGE (1038)
#   define PERL_WARNING_HEX_EXPONENT_OVERFLOW   PERL_WARNING_MESSAGE (1039)
#   define PERL_WARNING_HEX_MANTISSA_OVERFLOW   PERL_WARNING_MESSAGE (1040)
#   define PERL_WARNING_NUMBER_NOT_PORTABLE     PERL_WARNING_MESSAGE (1041)
#   define PERL_WARNING_NUMBER_TOO_LONG         PERL_WARNING_MESSAGE (1042)
#   define PERL_WARNING_EARLIER_DECLARATION     PERL_WARNING_MESSAGE (1043)
#   define PERL_WARNING_OUR_REDECLARED          PERL_WARNING_MESSAGE (1044)
#   define PERL_WARNING_SYMBOL_NOT_AVAILABLE    PERL_WARNING_MESSAGE (1045)
#   define PERL_WARNING_SYMBOL_NOT_SHARED       PERL_WARNING_MESSAGE (1046)
#   define PERL_WARNING_NEVER_INTRODUCED        PERL_WARNING_MESSAGE (1047)
#   define PERL_WARNING_UNPACK_CHAR_WRAPPED     PERL_WARNING_MESSAGE (1048)
#   define PERL_WARNING_PACK_CHARS_WRAPPED      PERL_WARNING_MESSAGE (1049)
#   define PERL_WARNING_PACK_INVALID_TYPE       PERL_WARNING_MESSAGE (1050)

#   define PERL_EXPERIMENT_FOR_MY_LIST          PERL_EXPERIMENT_MESSAGE (1000)
#   define PERL_EXPERIMENT_DECLARE_REFS         PERL_EXPERIMENT_MESSAGE (1001)
#   define PERL_EXPERIMENT_ADJUST               PERL_EXPERIMENT_MESSAGE (1002)
#   define PERL_EXPERIMENT_METHOD               PERL_EXPERIMENT_MESSAGE (1003)
#   define PERL_EXPERIMENT_TRY_CATCH            PERL_EXPERIMENT_MESSAGE (1004)
#   define PERL_EXPERIMENT_CLASS                PERL_EXPERIMENT_MESSAGE (1005)
#   define PERL_EXPERIMENT_DEFER                PERL_EXPERIMENT_MESSAGE (1006)
#   define PERL_EXPERIMENT_FIELD                PERL_EXPERIMENT_MESSAGE (1007)
#   define PERL_EXPERIMENT_FINALLY              PERL_EXPERIMENT_MESSAGE (1008)
#   define PERL_EXPERIMENT_UNI_STRING_DELIM     PERL_EXPERIMENT_MESSAGE (1009)
#   define PERL_EXPERIMENT_CONST                PERL_EXPERIMENT_MESSAGE (1010)
#   define PERL_EXPERIMENT_CONST_SUB            PERL_EXPERIMENT_MESSAGE (1011)

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
