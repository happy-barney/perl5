
#ifndef PERLY_ACTIONS__H__INCLUDED
#define PERLY_ACTIONS__H__INCLUDED

#define PERLY_ADJUST_COPLINE(Element)                                   \
    do {                                                                \
        if (parser->copline > (line_t)(Element))                        \
            parser->copline = (line_t)(Element);                        \
    } while (0)

#endif
