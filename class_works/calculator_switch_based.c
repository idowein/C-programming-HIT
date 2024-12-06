# include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {

	int a, b;
	double result;
	char op;
	printf("Please enter one number\n");
	scanf_s("%d", &a);
	rewind(stdin);
	printf("Please enter an operation\n");
	scanf_s("%ch", &op);
	printf("Please enter one number\n");
	scanf_s("%d", &b);

	switch (op) {

	case '+':
		result = (double)(a + b); 
		break;
	case '-':
		result = (double)(a - b);
		break;
	case '*':
		result = (double)(a * b);
		break;
	case '/':
		if (b != 0) {
			result = (double)(a / b);
			break;
		}
		printf("Invalid action\n");
		break;
	default:
		printf("Invalid action");
		break;

	}
	printf("The result is %lf\n", result);
}