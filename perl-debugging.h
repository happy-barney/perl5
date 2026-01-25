/*    perl-debugging.h
 *
 *    Copyright (C) 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001,
 *    2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009 by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 */

#ifndef H_PERL_DEBUGGING
#define H_PERL_DEBUGGING

/* Macros are always defined, either as noop or
#define DEBUG_T_OUTPUT(...) DEBUG_OUTPUT (T, __VA_ARGS__)

#ifdef DEBUGGING

#   ifndef DEBUG_MODULE
#       include <string.h>

#       ifdef WIN32
#           define DEBUG_MODULE_PATH_SEP '\\'
#       else
#           define DEBUG_MODULE_PATH_SEP '/'
#       endif

#       define DEBUG_MODULE (                                           \
            strrchr (__FILE__, DEBUG_MODULE_PATH_SEP)                   \
                ? strrchr (__FILE__, DEBUG_MODULE_PATH_SEP) + 1         \
                : __FILE__                                              \
            )

#   endif

#   define DEBUG_OUTPUT(Flag, ...)                                      \
        DEBUG_OUTPUT_TRANS (DEBUG_ ## Flag, # Flag, __VA_ARGS__)

#   define DEBUG_OUTPUT_TRANS(Macro, Str_Flag, ...)                     \
        DEBUG_OUTPUT_IMPL (Macro, Str_Flag, __VA_ARGS__)

#   define DEBUG_OUTPUT_IMPL(Macro, Str_Flag, ...)                      \
        Macro ({                                                        \
            PerlIO_printf (Perl_debug_log, "[" Str_Flag ": %8s:%5d] ", DEBUG_MODULE, __LINE__); \
            PerlIO_printf (Perl_debug_log, __VA_ARGS__);                \
        })

#else /* ! defined DEBUGGING */

#   define DEBUG_OUTPUT(...)

#endif /* DEBUGGING */

#   define WITH_DEBUG(Flag)                                             \
	    WITH_DEBUG_TRANS_1(Flag, __COUNTER__, __LINE__)

#   define WITH_DEBUG_TRANS_1(Flag, Counter, Line)                      \
        WITH_DEBUG_TRANS_2 (                                            \
            DEBUG_ ## Flag ## _Test,                                    \
            WITH_DEBUG_ ## Line ## _ ## Counter                         \
        )

#   define WITH_DEBUG_TRANS_2(Macro, Prefix)                            \
	    WITH_DEBUG_IMPL (Macro, Prefix)

#   define WITH_DEBUG_IMPL(Macro, Prefix)                               \
        if (1)                                                          \
            if (Macro) goto Prefix ## _Body;                            \
        } else Prefix ## _Body: if (0) { } else

#else /* ! defined DEBUGGING */

#   define DEBUG_OUTPUT(...)
#   define WITH_DEBUG(...) if (0)

#endif /* DEBUGGING */

#define DEBUG_T_OUTPUT(...) DEBUG_OUTPUT (T, __VA_ARGS__)
#define DEBUG_p_OUTPUT(...) DEBUG_OUTPUT (p, __VA_ARGS__)

#define WITH_DEBUG_T        WITH_DEBUG (T)

#endif /* H_PERL_DEBUGGING */
