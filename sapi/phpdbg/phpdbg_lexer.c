/* Generated by re2c 0.13.5 */
#line 1 "sapi/phpdbg/phpdbg_lexer.l"
/*
 * phpdbg_lexer.l
 */

#include "phpdbg.h"
#include "phpdbg_cmd.h"

#include "phpdbg_parser.h"

#define LEX(v) (PHPDBG_G(lexer).v)

#define YYCTYPE unsigned char
#define YYSETCONDITION(x) LEX(state) = x;
#define YYGETCONDITION() LEX(state)
#define YYCURSOR LEX(cursor)
#define YYMARKER LEX(marker)
#define YYCTXMARKER LEX(ctxmarker)
#define yyleng LEX(len)
#define yytext ((char*) LEX(text))
#undef YYDEBUG
#define YYDEBUG(a, b)
#define YYFILL(n)

#define NORMAL 0
#define PRE_RAW 1
#define RAW 2
#define INITIAL 3

ZEND_EXTERN_MODULE_GLOBALS(phpdbg);

void phpdbg_init_lexer (phpdbg_param_t *stack, char *input) {
	PHPDBG_G(parser_stack) = stack;

	YYSETCONDITION(INITIAL);

	LEX(text) = YYCURSOR = (unsigned char *) input;
	LEX(len) = strlen(input);
}

int phpdbg_lex (phpdbg_param_t* yylval) {

restart:
	LEX(text) = YYCURSOR;


#line 49 "sapi/phpdbg/phpdbg_lexer.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYGETCONDITION() < 2) {
		if (YYGETCONDITION() < 1) {
			goto yyc_NORMAL;
		} else {
			goto yyc_PRE_RAW;
		}
	} else {
		if (YYGETCONDITION() < 3) {
			goto yyc_RAW;
		} else {
			goto yyc_INITIAL;
		}
	}
/* *********************************** */
yyc_INITIAL:
	{
		static const unsigned char yybm[] = {
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0, 128,   0,   0,   0, 128,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			128,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
		};

		YYDEBUG(0, *YYCURSOR);
		YYFILL(4);
		yych = *YYCURSOR;
		if (yych <= 'D') {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy4;
				if (yych <= 0x08) goto yy11;
				if (yych >= '\n') goto yy5;
			} else {
				if (yych <= '\r') {
					if (yych <= '\f') goto yy11;
				} else {
					if (yych != ' ') goto yy11;
				}
			}
		} else {
			if (yych <= 'd') {
				if (yych <= 'Q') {
					if (yych <= 'E') goto yy7;
					goto yy11;
				} else {
					if (yych <= 'R') goto yy10;
					if (yych <= 'S') goto yy8;
					goto yy11;
				}
			} else {
				if (yych <= 'q') {
					if (yych <= 'e') goto yy7;
					goto yy11;
				} else {
					if (yych <= 'r') goto yy9;
					if (yych <= 's') goto yy8;
					goto yy11;
				}
			}
		}
		YYDEBUG(2, *YYCURSOR);
		++YYCURSOR;
		if ((yych = *YYCURSOR) <= '\f') {
			if (yych == '\t') goto yy26;
		} else {
			if (yych <= '\r') goto yy26;
			if (yych == ' ') goto yy26;
		}
yy3:
		YYDEBUG(3, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 178 "sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(NORMAL);

	YYCURSOR = LEX(text);
	goto restart;
}
#line 158 "sapi/phpdbg/phpdbg_lexer.c"
yy4:
		YYDEBUG(4, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy3;
yy5:
		YYDEBUG(5, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(6, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 70 "sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 172 "sapi/phpdbg/phpdbg_lexer.c"
yy7:
		YYDEBUG(7, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'V') goto yy22;
		if (yych == 'v') goto yy22;
		goto yy3;
yy8:
		YYDEBUG(8, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'H') goto yy18;
		if (yych == 'h') goto yy18;
		goto yy3;
yy9:
		YYDEBUG(9, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy15;
		}
		if (yych == 'U') goto yy12;
		if (yych == 'u') goto yy12;
		goto yy3;
yy10:
		YYDEBUG(10, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'U') goto yy12;
		if (yych == 'u') goto yy12;
		goto yy3;
yy11:
		YYDEBUG(11, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy3;
yy12:
		YYDEBUG(12, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == 'N') goto yy14;
		if (yych == 'n') goto yy14;
yy13:
		YYDEBUG(13, *YYCURSOR);
		YYCURSOR = YYMARKER;
		goto yy3;
yy14:
		YYDEBUG(14, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yybm[0+yych] & 128) {
			goto yy15;
		}
		goto yy13;
yy15:
		YYDEBUG(15, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(16, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy15;
		}
		YYDEBUG(17, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 165 "sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(PRE_RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_RUN;
}
#line 241 "sapi/phpdbg/phpdbg_lexer.c"
yy18:
		YYDEBUG(18, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych <= '\f') {
			if (yych != '\t') goto yy13;
		} else {
			if (yych <= '\r') goto yy19;
			if (yych != ' ') goto yy13;
		}
yy19:
		YYDEBUG(19, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(20, *YYCURSOR);
		if (yych <= '\f') {
			if (yych == '\t') goto yy19;
		} else {
			if (yych <= '\r') goto yy19;
			if (yych == ' ') goto yy19;
		}
		YYDEBUG(21, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 160 "sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(PRE_RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_SHELL;
}
#line 271 "sapi/phpdbg/phpdbg_lexer.c"
yy22:
		YYDEBUG(22, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych <= '\f') {
			if (yych != '\t') goto yy13;
		} else {
			if (yych <= '\r') goto yy23;
			if (yych != ' ') goto yy13;
		}
yy23:
		YYDEBUG(23, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(24, *YYCURSOR);
		if (yych <= '\f') {
			if (yych == '\t') goto yy23;
		} else {
			if (yych <= '\r') goto yy23;
			if (yych == ' ') goto yy23;
		}
		YYDEBUG(25, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 155 "sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(PRE_RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_EVAL;
}
#line 301 "sapi/phpdbg/phpdbg_lexer.c"
yy26:
		YYDEBUG(26, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(27, *YYCURSOR);
		if (yych <= '\f') {
			if (yych == '\t') goto yy26;
		} else {
			if (yych <= '\r') goto yy26;
			if (yych == ' ') goto yy26;
		}
		YYDEBUG(28, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 149 "sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 322 "sapi/phpdbg/phpdbg_lexer.c"
	}
/* *********************************** */
yyc_NORMAL:
	{
		static const unsigned char yybm[] = {
			  0,  16,  16,  16,  16,  16,  16,  16, 
			 16,   8,   0,  16,  16,   8,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			  8,  16,  16,   0,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  48,  16, 
			176, 176, 176, 176, 176, 176, 176, 176, 
			176, 176,   0,  16,  16,  16,  16,  16, 
			 16, 208, 208, 208, 208, 208, 208,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  16,  16,  16,  16,  16, 
			 16, 208, 208, 208, 208, 208, 208,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
		};
		YYDEBUG(29, *YYCURSOR);
		YYFILL(11);
		yych = *YYCURSOR;
		if (yybm[0+yych] & 8) {
			goto yy31;
		}
		if (yych <= 'N') {
			if (yych <= '0') {
				if (yych <= '#') {
					if (yych <= '\t') {
						if (yych <= 0x00) goto yy34;
						goto yy42;
					} else {
						if (yych <= '\n') goto yy34;
						if (yych <= '"') goto yy42;
						goto yy39;
					}
				} else {
					if (yych <= '-') {
						if (yych <= ',') goto yy42;
						goto yy36;
					} else {
						if (yych <= '.') goto yy44;
						if (yych <= '/') goto yy42;
						goto yy47;
					}
				}
			} else {
				if (yych <= 'E') {
					if (yych <= ':') {
						if (yych <= '9') goto yy44;
						goto yy41;
					} else {
						if (yych <= 'C') goto yy42;
						if (yych <= 'D') goto yy48;
						goto yy49;
					}
				} else {
					if (yych <= 'H') {
						if (yych <= 'F') goto yy50;
						goto yy42;
					} else {
						if (yych <= 'I') goto yy38;
						if (yych <= 'M') goto yy42;
						goto yy51;
					}
				}
			}
		} else {
			if (yych <= 'f') {
				if (yych <= 'Y') {
					if (yych <= 'S') {
						if (yych <= 'O') goto yy52;
						goto yy42;
					} else {
						if (yych <= 'T') goto yy53;
						if (yych <= 'X') goto yy42;
						goto yy54;
					}
				} else {
					if (yych <= 'c') {
						if (yych <= 'Z') goto yy55;
						goto yy42;
					} else {
						if (yych <= 'd') goto yy48;
						if (yych <= 'e') goto yy49;
						goto yy50;
					}
				}
			} else {
				if (yych <= 'o') {
					if (yych <= 'i') {
						if (yych <= 'h') goto yy42;
						goto yy38;
					} else {
						if (yych <= 'm') goto yy42;
						if (yych <= 'n') goto yy51;
						goto yy52;
					}
				} else {
					if (yych <= 'x') {
						if (yych == 't') goto yy53;
						goto yy42;
					} else {
						if (yych <= 'y') goto yy54;
						if (yych <= 'z') goto yy56;
						goto yy42;
					}
				}
			}
		}
yy31:
		YYDEBUG(31, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(32, *YYCURSOR);
		if (yybm[0+yych] & 8) {
			goto yy31;
		}
		YYDEBUG(33, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 149 "sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 469 "sapi/phpdbg/phpdbg_lexer.c"
yy34:
		YYDEBUG(34, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(35, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 70 "sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 479 "sapi/phpdbg/phpdbg_lexer.c"
yy36:
		YYDEBUG(36, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy44;
		}
		if (yych == 'r') goto yy113;
		goto yy43;
yy37:
		YYDEBUG(37, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 135 "sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = estrndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_ID;
}
#line 499 "sapi/phpdbg/phpdbg_lexer.c"
yy38:
		YYDEBUG(38, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'F') goto yy109;
		if (yych == 'f') goto yy109;
		goto yy43;
yy39:
		YYDEBUG(39, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(40, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 87 "sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_POUND;
}
#line 516 "sapi/phpdbg/phpdbg_lexer.c"
yy41:
		YYDEBUG(41, *YYCURSOR);
		YYCTXMARKER = YYCURSOR + 1;
		yych = *++YYCURSOR;
		if (yych == ':') goto yy107;
		if (yych == '\\') goto yy61;
		goto yy105;
yy42:
		YYDEBUG(42, *YYCURSOR);
		yyaccept = 0;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
yy43:
		YYDEBUG(43, *YYCURSOR);
		if (yybm[0+yych] & 16) {
			goto yy42;
		}
		if (yych <= '9') goto yy37;
		goto yy58;
yy44:
		YYDEBUG(44, *YYCURSOR);
		yyaccept = 1;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(45, *YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy44;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy46;
				if (yych <= 0x08) goto yy42;
			} else {
				if (yych != '\r') goto yy42;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy46;
				if (yych <= '"') goto yy42;
			} else {
				if (yych == ':') goto yy58;
				goto yy42;
			}
		}
yy46:
		YYDEBUG(46, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 116 "sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = atoi(yytext);
	return T_DIGITS;
}
#line 572 "sapi/phpdbg/phpdbg_lexer.c"
yy47:
		YYDEBUG(47, *YYCURSOR);
		yyaccept = 1;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy44;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy46;
				if (yych <= 0x08) goto yy43;
				goto yy46;
			} else {
				if (yych == '\r') goto yy46;
				goto yy43;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy46;
				if (yych <= '"') goto yy43;
				goto yy46;
			} else {
				if (yych == 'x') goto yy101;
				goto yy43;
			}
		}
yy48:
		YYDEBUG(48, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'I') goto yy95;
		if (yych == 'i') goto yy95;
		goto yy43;
yy49:
		YYDEBUG(49, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'N') goto yy90;
		if (yych == 'n') goto yy90;
		goto yy43;
yy50:
		YYDEBUG(50, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'A') goto yy87;
		if (yych == 'a') goto yy87;
		goto yy43;
yy51:
		YYDEBUG(51, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'O') goto yy83;
		if (yych == 'o') goto yy83;
		goto yy43;
yy52:
		YYDEBUG(52, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= 'N') {
			if (yych == 'F') goto yy82;
			if (yych <= 'M') goto yy43;
			goto yy76;
		} else {
			if (yych <= 'f') {
				if (yych <= 'e') goto yy43;
				goto yy82;
			} else {
				if (yych == 'n') goto yy76;
				goto yy43;
			}
		}
yy53:
		YYDEBUG(53, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'R') goto yy80;
		if (yych == 'r') goto yy80;
		goto yy43;
yy54:
		YYDEBUG(54, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy75;
		if (yych == 'e') goto yy75;
		goto yy43;
yy55:
		YYDEBUG(55, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy72;
		goto yy43;
yy56:
		YYDEBUG(56, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'e') goto yy43;
		YYDEBUG(57, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'n') goto yy66;
		goto yy43;
yy58:
		YYDEBUG(58, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == '/') goto yy60;
		if (yych == '\\') goto yy61;
yy59:
		YYDEBUG(59, *YYCURSOR);
		YYCURSOR = YYMARKER;
		if (yyaccept <= 2) {
			if (yyaccept <= 1) {
				if (yyaccept <= 0) {
					goto yy37;
				} else {
					goto yy46;
				}
			} else {
				goto yy71;
			}
		} else {
			if (yyaccept <= 3) {
				goto yy104;
			} else {
				goto yy119;
			}
		}
yy60:
		YYDEBUG(60, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == '/') goto yy64;
		goto yy59;
yy61:
		YYDEBUG(61, *YYCURSOR);
		yyaccept = 0;
		YYMARKER = ++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(62, *YYCURSOR);
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy37;
				if (yych <= 0x08) goto yy61;
				goto yy37;
			} else {
				if (yych == '\r') goto yy37;
				goto yy61;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy37;
				if (yych <= '"') goto yy61;
				goto yy37;
			} else {
				if (yych != ':') goto yy61;
			}
		}
		YYDEBUG(63, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		if (yych == '\\') goto yy61;
		goto yy59;
yy64:
		YYDEBUG(64, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(65, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 97 "sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = estrndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_PROTO;
}
#line 747 "sapi/phpdbg/phpdbg_lexer.c"
yy66:
		YYDEBUG(66, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'd') goto yy43;
		YYDEBUG(67, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != '_') goto yy43;
yy68:
		YYDEBUG(68, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy69;
		}
		goto yy43;
yy69:
		YYDEBUG(69, *YYCURSOR);
		yyaccept = 2;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(70, *YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy69;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy71;
				if (yych <= 0x08) goto yy42;
			} else {
				if (yych != '\r') goto yy42;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy71;
				if (yych <= '"') goto yy42;
			} else {
				if (yych == ':') goto yy58;
				goto yy42;
			}
		}
yy71:
		YYDEBUG(71, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 128 "sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, OP_PARAM);
	yylval->str = estrndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_OPCODE;
}
#line 801 "sapi/phpdbg/phpdbg_lexer.c"
yy72:
		YYDEBUG(72, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'N') goto yy43;
		YYDEBUG(73, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'D') goto yy43;
		YYDEBUG(74, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == '_') goto yy68;
		goto yy43;
yy75:
		YYDEBUG(75, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'S') goto yy76;
		if (yych != 's') goto yy43;
yy76:
		YYDEBUG(76, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\f') {
			if (yych != '\t') goto yy43;
		} else {
			if (yych <= '\r') goto yy77;
			if (yych != ' ') goto yy43;
		}
yy77:
		YYDEBUG(77, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(78, *YYCURSOR);
		if (yych <= '\f') {
			if (yych == '\t') goto yy77;
		} else {
			if (yych <= '\r') goto yy77;
			if (yych == ' ') goto yy77;
		}
		YYDEBUG(79, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 104 "sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = 1;
	return T_TRUTHY;
}
#line 852 "sapi/phpdbg/phpdbg_lexer.c"
yy80:
		YYDEBUG(80, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'U') goto yy81;
		if (yych != 'u') goto yy43;
yy81:
		YYDEBUG(81, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy76;
		if (yych == 'e') goto yy76;
		goto yy43;
yy82:
		YYDEBUG(82, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'F') goto yy83;
		if (yych != 'f') goto yy43;
yy83:
		YYDEBUG(83, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\f') {
			if (yych != '\t') goto yy43;
		} else {
			if (yych <= '\r') goto yy84;
			if (yych != ' ') goto yy43;
		}
yy84:
		YYDEBUG(84, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(85, *YYCURSOR);
		if (yych <= '\f') {
			if (yych == '\t') goto yy84;
		} else {
			if (yych <= '\r') goto yy84;
			if (yych == ' ') goto yy84;
		}
		YYDEBUG(86, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 110 "sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = 0;
	return T_FALSY;
}
#line 902 "sapi/phpdbg/phpdbg_lexer.c"
yy87:
		YYDEBUG(87, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'L') goto yy88;
		if (yych != 'l') goto yy43;
yy88:
		YYDEBUG(88, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'S') goto yy89;
		if (yych != 's') goto yy43;
yy89:
		YYDEBUG(89, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy83;
		if (yych == 'e') goto yy83;
		goto yy43;
yy90:
		YYDEBUG(90, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'A') goto yy91;
		if (yych != 'a') goto yy43;
yy91:
		YYDEBUG(91, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'B') goto yy92;
		if (yych != 'b') goto yy43;
yy92:
		YYDEBUG(92, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'L') goto yy93;
		if (yych != 'l') goto yy43;
yy93:
		YYDEBUG(93, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy94;
		if (yych != 'e') goto yy43;
yy94:
		YYDEBUG(94, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'D') goto yy76;
		if (yych == 'd') goto yy76;
		goto yy43;
yy95:
		YYDEBUG(95, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'S') goto yy96;
		if (yych != 's') goto yy43;
yy96:
		YYDEBUG(96, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'A') goto yy97;
		if (yych != 'a') goto yy43;
yy97:
		YYDEBUG(97, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'B') goto yy98;
		if (yych != 'b') goto yy43;
yy98:
		YYDEBUG(98, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'L') goto yy99;
		if (yych != 'l') goto yy43;
yy99:
		YYDEBUG(99, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy100;
		if (yych != 'e') goto yy43;
yy100:
		YYDEBUG(100, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'D') goto yy83;
		if (yych == 'd') goto yy83;
		goto yy43;
yy101:
		YYDEBUG(101, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy102;
		}
		goto yy43;
yy102:
		YYDEBUG(102, *YYCURSOR);
		yyaccept = 3;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(103, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy102;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy104;
				if (yych <= 0x08) goto yy42;
			} else {
				if (yych != '\r') goto yy42;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy104;
				if (yych <= '"') goto yy42;
			} else {
				if (yych == ':') goto yy58;
				goto yy42;
			}
		}
yy104:
		YYDEBUG(104, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 122 "sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, ADDR_PARAM);
	yylval->addr = strtoul(yytext, 0, 16);
	return T_ADDR;
}
#line 1033 "sapi/phpdbg/phpdbg_lexer.c"
yy105:
		YYDEBUG(105, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(106, *YYCURSOR);
		YYCURSOR = YYCTXMARKER;
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 93 "sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_COLON;
}
#line 1044 "sapi/phpdbg/phpdbg_lexer.c"
yy107:
		YYDEBUG(107, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(108, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 90 "sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_DCOLON;
}
#line 1054 "sapi/phpdbg/phpdbg_lexer.c"
yy109:
		YYDEBUG(109, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\f') {
			if (yych != '\t') goto yy43;
		} else {
			if (yych <= '\r') goto yy110;
			if (yych != ' ') goto yy43;
		}
yy110:
		YYDEBUG(110, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(111, *YYCURSOR);
		if (yych <= '\f') {
			if (yych == '\t') goto yy110;
		} else {
			if (yych <= '\r') goto yy110;
			if (yych == ' ') goto yy110;
		}
		YYDEBUG(112, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 81 "sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_IF;
}
#line 1085 "sapi/phpdbg/phpdbg_lexer.c"
yy113:
		YYDEBUG(113, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= ' ') {
			if (yych <= '\f') {
				if (yych != '\t') goto yy43;
			} else {
				if (yych <= '\r') goto yy114;
				if (yych <= 0x1F) goto yy43;
			}
		} else {
			if (yych <= '.') {
				if (yych <= ',') goto yy43;
				if (yych <= '-') goto yy116;
				goto yy117;
			} else {
				if (yych <= '/') goto yy43;
				if (yych <= '9') goto yy117;
				goto yy43;
			}
		}
yy114:
		YYDEBUG(114, *YYCURSOR);
		++YYCURSOR;
		YYFILL(2);
		yych = *YYCURSOR;
		YYDEBUG(115, *YYCURSOR);
		if (yych <= ' ') {
			if (yych <= '\f') {
				if (yych == '\t') goto yy114;
				goto yy59;
			} else {
				if (yych <= '\r') goto yy114;
				if (yych <= 0x1F) goto yy59;
				goto yy114;
			}
		} else {
			if (yych <= '.') {
				if (yych <= ',') goto yy59;
				if (yych <= '-') goto yy120;
				goto yy121;
			} else {
				if (yych <= '/') goto yy59;
				if (yych <= '9') goto yy121;
				goto yy59;
			}
		}
yy116:
		YYDEBUG(116, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == '.') goto yy117;
		if (yych <= '/') goto yy43;
		if (yych >= ':') goto yy43;
yy117:
		YYDEBUG(117, *YYCURSOR);
		yyaccept = 4;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(118, *YYCURSOR);
		if (yych <= ' ') {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy119;
				if (yych <= 0x08) goto yy42;
			} else {
				if (yych == '\r') goto yy119;
				if (yych <= 0x1F) goto yy42;
			}
		} else {
			if (yych <= '.') {
				if (yych == '#') goto yy119;
				if (yych <= '-') goto yy42;
				goto yy117;
			} else {
				if (yych <= '/') goto yy42;
				if (yych <= '9') goto yy117;
				if (yych <= ':') goto yy58;
				goto yy42;
			}
		}
yy119:
		YYDEBUG(119, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 74 "sapi/phpdbg/phpdbg_lexer.l"
		{
	char *text = yytext + 2;
	while (*++text < '0');
	yylval->num = atoi(text);
	return T_REQ_ID;
}
#line 1178 "sapi/phpdbg/phpdbg_lexer.c"
yy120:
		YYDEBUG(120, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == '.') goto yy121;
		if (yych <= '/') goto yy59;
		if (yych >= ':') goto yy59;
yy121:
		YYDEBUG(121, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(122, *YYCURSOR);
		if (yych == '.') goto yy121;
		if (yych <= '/') goto yy119;
		if (yych <= '9') goto yy121;
		goto yy119;
	}
/* *********************************** */
yyc_PRE_RAW:
	{
		static const unsigned char yybm[] = {
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,  64,   0,   0,   0,  64,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			 64,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0, 128,   0, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
		};
		YYDEBUG(123, *YYCURSOR);
		YYFILL(2);
		yych = *YYCURSOR;
		if (yych <= '\f') {
			if (yych <= 0x08) {
				if (yych <= 0x00) goto yy127;
				goto yy131;
			} else {
				if (yych <= '\t') goto yy125;
				if (yych <= '\n') goto yy128;
				goto yy131;
			}
		} else {
			if (yych <= ' ') {
				if (yych <= '\r') goto yy125;
				if (yych <= 0x1F) goto yy131;
			} else {
				if (yych == '-') goto yy130;
				goto yy131;
			}
		}
yy125:
		YYDEBUG(125, *YYCURSOR);
		++YYCURSOR;
		if ((yych = *YYCURSOR) <= '\f') {
			if (yych == '\t') goto yy139;
		} else {
			if (yych <= '\r') goto yy139;
			if (yych == ' ') goto yy139;
		}
yy126:
		YYDEBUG(126, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 171 "sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);

	YYCURSOR = LEX(text);
	goto restart;
}
#line 1273 "sapi/phpdbg/phpdbg_lexer.c"
yy127:
		YYDEBUG(127, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy126;
yy128:
		YYDEBUG(128, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(129, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 70 "sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 1287 "sapi/phpdbg/phpdbg_lexer.c"
yy130:
		YYDEBUG(130, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'r') goto yy132;
		goto yy126;
yy131:
		YYDEBUG(131, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy126;
yy132:
		YYDEBUG(132, *YYCURSOR);
		++YYCURSOR;
		YYFILL(2);
		yych = *YYCURSOR;
		YYDEBUG(133, *YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy132;
		}
		if (yych <= '.') {
			if (yych <= ',') goto yy134;
			if (yych <= '-') goto yy135;
			goto yy136;
		} else {
			if (yych <= '/') goto yy134;
			if (yych <= '9') goto yy136;
		}
yy134:
		YYDEBUG(134, *YYCURSOR);
		YYCURSOR = YYMARKER;
		goto yy126;
yy135:
		YYDEBUG(135, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yybm[0+yych] & 128) {
			goto yy136;
		}
		goto yy134;
yy136:
		YYDEBUG(136, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(137, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy136;
		}
		YYDEBUG(138, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 74 "sapi/phpdbg/phpdbg_lexer.l"
		{
	char *text = yytext + 2;
	while (*++text < '0');
	yylval->num = atoi(text);
	return T_REQ_ID;
}
#line 1344 "sapi/phpdbg/phpdbg_lexer.c"
yy139:
		YYDEBUG(139, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(140, *YYCURSOR);
		if (yych <= '\f') {
			if (yych == '\t') goto yy139;
		} else {
			if (yych <= '\r') goto yy139;
			if (yych == ' ') goto yy139;
		}
		YYDEBUG(141, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 149 "sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 1365 "sapi/phpdbg/phpdbg_lexer.c"
	}
/* *********************************** */
yyc_RAW:
	{
		static const unsigned char yybm[] = {
			  0, 128, 128, 128, 128, 128, 128, 128, 
			128, 192,   0, 128, 128, 192, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			192, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
			128, 128, 128, 128, 128, 128, 128, 128, 
		};
		YYDEBUG(142, *YYCURSOR);
		YYFILL(1);
		yych = *YYCURSOR;
		if (yybm[0+yych] & 64) {
			goto yy144;
		}
		if (yych <= 0x00) goto yy147;
		if (yych == '\n') goto yy147;
		goto yy149;
yy144:
		YYDEBUG(144, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(145, *YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy144;
		}
		if (yych <= 0x00) goto yy146;
		if (yych != '\n') goto yy149;
yy146:
		YYDEBUG(146, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 142 "sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = estrndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_INPUT;
}
#line 1434 "sapi/phpdbg/phpdbg_lexer.c"
yy147:
		YYDEBUG(147, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(148, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 70 "sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 1444 "sapi/phpdbg/phpdbg_lexer.c"
yy149:
		YYDEBUG(149, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(150, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy149;
		}
		goto yy146;
	}
}
#line 185 "sapi/phpdbg/phpdbg_lexer.l"

}
