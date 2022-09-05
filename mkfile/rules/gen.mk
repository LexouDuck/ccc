#! This file holds C-specific rules to generate language-parser code, using lex/flex & yacc/bison



# lex

#! GNU conventional variable: the tool used as `lex` (usually `flex`)
LEX = flex
#! GNU conventional variable: the flags given to lex
LFLAGS = # -d

#! The generated output file after running lex
LEX_GEN = $(GENDIR)/lex.yy.c
#! The input source file given to lex
LEX_SRC = $(SRCDIR)/parser.l

#! The rule which generates output C code from lex code
$(LEX_GEN): $(LEX_SRC)
	$(LEX)  $(LFLAGS) -o $(LEX_GEN) $(LEX_SRC)



# yacc

#! GNU conventional variable: the tool used as `yacc` (usually `bison`)
YACC = bison
#! GNU conventional variable: the flags given to yacc
YFLAGS = # -t

#! The input source file given to yacc
YACC_SRC = $(SRCDIR)/parser.y
#! The generated output source file after running yacc
YACC_GEN = $(GENDIR)/y.tab.c
#! The generated output header file after running yacc
YACC_HDR = $(GENDIR)/y.tab.h

#! The rule which generates output C code from yacc code
$(YACC_GEN): $(YACC_SRC)
	$(YACC) $(YFLAGS) --defines=$(YACC_HDR) -o $(YACC_GEN) $(YACC_SRC)
