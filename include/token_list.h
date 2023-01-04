#ifndef TOKEN_LIST_H
#define TOKEN_LIST_H

enum TOKEN_LIST_OPERATORS {
	TOKEN_LIST_OPERATOR_ADD,
	TOKEN_LIST_OPERATOR_SUB,
	TOKEN_LIST_OPERATOR_MUL,
	TOKEN_LIST_OPERATOR_DIV
};

enum TOKEN_LIST_SYMBOLS {
	_ = 100,
	TOKEN_LIST_SYMBOL_LPAREN,
	TOKEN_LIST_SYMBOL_RPAREN
};

enum TOKEN_LIST_ASSIGNMENT_OPERATORS {
	_ = 200,
	TOKEN_LIST_ASSIGNMENT_OPERATOR_EQ
}

#endif
