#ifndef TOKEN_H
#define TOKEN_H

typedef struct TOKEN {
	short type;
	char * value;
} Token;

Token token(short type, char * value) {
	Token _token = {type, value};
	return _token;
}

#endif
