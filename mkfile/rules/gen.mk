#! This file holds C-specific rules to generate language-parser code, using lex/flex & yacc/bison



# lex
LEX_SRC = $(GENDIR)/lex.yy.c
LEX_INPUT = $(SRCDIR)/parser.l
LEX = flex
LFLAGS = # -d

# yacc
YACC_HDR = $(GENDIR)/y.tab.h
YACC_SRC = $(GENDIR)/y.tab.c
YACC_INPUT = $(SRCDIR)/parser.y
YACC = bison
YFLAGS = # -t



$(LEX_SRC): $(LEX_INPUT)
	$(LEX)  $(LFLAGS) -o $(LEX_SRC) $(LEX_INPUT)

$(YACC_SRC): $(YACC_INPUT)
	$(YACC) $(YFLAGS) --defines=$(YACC_HDR) -o $(YACC_SRC) $(YACC_INPUT)
