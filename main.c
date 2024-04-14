#include "math.h"

#include <stdio.h>

int main(int argc, char** argv){
	int operand1 = 0;
	int operand2 = 0;
	char operation = ' ';
	
	scanf("%d %c %d", &operand1, &operation, &operand2);

	switch(operation){
		case '+':
			printf("%d", sum(operand1, operand2));
			break;
		case '-':	
			printf("%d", sub(operand1, operand2));
			break;
		case '*':
			printf("%d", mul(operand1, operand2));
			break;
		case '/':
			printf("%d", div(operand1, operand2));
			break;
		default:
			printf("Invalid operation");
	}

	return 0;
}

