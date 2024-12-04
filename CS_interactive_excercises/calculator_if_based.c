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

	if (math_sign != '+' || '-' || '*' || '/') {

		if (math_sign == '+') {
			sum = a + b;
			printf("The sum is: %lf\n", sum);
			return;
		}

		if (math_sign == '-') {
			sum = a - b;
			printf("The sum is: %lf\n", sum);
			return;
		}

		if (math_sign == '/' && b != 0) {
			sum = a / b;
			printf("The sum is: %lf\n", sum);
			return;
		}

		if (math_sign == '*') {
			sum = a * b;
			printf("The sum is: %lf\n", sum);
			return;
		}

		if (math_sign == '^') {
			sum = pow(a, b);
			printf("The sum is: %lf\n", sum);
			return;
		}

	}

	printf("Invalid result!");

}