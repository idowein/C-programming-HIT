#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <math.h>

void main() {	
	// This program implement calculator with basic math features based on if function 

	printf("Welcome to my calculator!\n");

	double a, b, sum;
	char math_sign;

	printf("please type one number\n");
	scanf("%lf", &a);

	rewind(stdin); // cleasr the input from keyboard
	printf("please type math operation\n");
	scanf("%ch", &math_sign);

	printf("please type one number\n");
	scanf("%lf", &b);

	switch (math_sign) {

	case '+': sum = a + b; 
		printf("Result is %lf\n", sum);
		break;

	case '-': sum = a - b;
		printf("Result is %lf\n", sum);
		break;

	case '*': sum = a * b;
		printf("Result is %lf\n", sum);
		break;

	case '/': sum = a / b;
		printf("Result is %lf\n", sum);
	default: printf("Invalid result\n");
	break;
	}

}