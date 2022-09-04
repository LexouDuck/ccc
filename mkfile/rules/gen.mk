#! This file holds C-specific rules to generate language-parser code, using lex/flex & yacc/bison



# lex
LEX_GEN = $(GENDIR)/lex.yy.c
LEX_SRC = $(SRCDIR)/parser.l
LEX = flex
LFLAGS = # -d

# yacc
YACC_HDR = $(GENDIR)/y.tab.h
YACC_GEN = $(GENDIR)/y.tab.c
YACC_SRC = $(SRCDIR)/parser.y
YACC = bison
YFLAGS = # -t



$(LEX_GEN): $(LEX_SRC)
	$(LEX)  $(LFLAGS) -o $(LEX_GEN) $(LEX_SRC)

$(YACC_GEN): $(YACC_SRC)
	$(YACC) $(YFLAGS) --defines=$(YACC_HDR) -o $(YACC_GEN) $(YACC_SRC)
