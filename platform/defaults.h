
#ifndef PERL__PLATFORM__DEFAULTS__H
#   define PERL__PLATFORM__DEFAULTS__H

#   ifndef __attribute__deprecated__
#       define __attribute__deprecated__
#   endif

#   ifndef PERL_ATOMIC_INCREMENT
#       define PERL_ATOMIC_INCREMENT(var) (++(var))
#   endif

#endif
