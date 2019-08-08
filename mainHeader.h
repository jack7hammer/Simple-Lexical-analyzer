//Done by : Abhijit Pual'
//Roll No; 39/Cse/16001
//Reg No : 0000158

#ifndef FP_H
#define FP_H
const char operators[6] = {'+','-','*','/','%','='};
const char seperators[6] = {';',',','(',')','{','}'};

int comment_identifier(char* string);
int integer_identifier(char *string);
int identifier_identifier(char *string);
int binop_identifier(char *string);
int seperators_identifier(char *string);
int blankspace_identifier(char *string);
#endif
