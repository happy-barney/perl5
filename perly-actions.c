
typedef I32 ival;
typedef OP * opval;

struct perly_rule_block {
    ival  PERLY_BRACE_OPEN;
    ival  remember;
    opval stmtseq;
};

struct perly_rule_formblock {
    ival  PERLY_EQUAL_SIGN;
    ival  remember;
    opval formstmtseq;
};

#define PERLY_ACTION_BLOCK(Brace_Open, Remember, Stmtseq)               \
    perly_action_block (                                                \
        parser,                                                         \
        (struct perly_rule_block) {                                     \
            .PERLY_BRACE_OPEN  = (Brace_Open),                          \
            .remember          = (Remember),                            \
            .stmtseq           = (Stmtseq)                              \
        }                                                               \
    );

#define PERLY_ACTION_FORMBLOCK(Equal_Sign, Remember, Formstmtseq)       \
    perly_action_formblock (                                            \
        parser,                                                         \
        (struct perly_rule_formblock) {                                 \
            .PERLY_EQUAL_SIGN  = (Equal_Sign),                          \
            .remember          = (Remember),                            \
            .formstmtseq       = (Formstmtseq)                          \
        }                                                               \
    );

#define PERLY_ACTION_REMEMBER()                                         \
    perly_action_remember (parser);

PERL_STATIC_INLINE opval
perly_action_block (yy_parser *parser, struct perly_rule_block rule) {
    COPLINE (rule.PERLY_BRACE_OPEN);

    return block_end (rule.remember, rule.stmtseq);
}

PERL_STATIC_INLINE opval
perly_action_formblock (yy_parser *parser, struct perly_rule_formblock rule) {
    COPLINE (rule.PERLY_EQUAL_SIGN);

    return block_end (rule.remember, rule.formstmtseq);
}

PERL_STATIC_INLINE ival
perly_action_remember (yy_parser *parser) {
    ival retval = block_start (TRUE);
    parser->parsed_sub = 0;

    return retval;
}
