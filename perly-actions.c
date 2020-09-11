
typedef I32 ival;
typedef OP * opval;

struct perly_rule_block {
    ival  PERLY_BRACE_OPEN;
    ival  remember;
    opval stmtseq;
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

PERL_STATIC_INLINE opval
perly_action_block (yy_parser *parser, struct perly_rule_block rule) {
    COPLINE (rule.PERLY_BRACE_OPEN);

    return block_end (rule.remember, rule.stmtseq);
}

