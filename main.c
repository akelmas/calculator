#include <stdio.h>

int sum(int a, int b){
	return a + b;
}

int main(int argc, char** argv){
	int operand1 = 0;
	int operand2 = 0;
	char operation = ' ';
	
	scanf("%d %c %d", &operand1, &operation, &operand2);

	switch(operation){
		case '+':
			printf("%d", sum(operand1, operand2));
			break;
		default:
			printf("Invalid operation");
	}

	return 0;
}

