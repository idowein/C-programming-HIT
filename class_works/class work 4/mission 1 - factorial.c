# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

int factorial(input) {
	/*
	* Logical idea: calculating x! = x(x-1)(x-2)...
	Scheme: 
	1. special condition 0! = 1
	2. loop - duplicating all the numbers that bigger than 0
	*/
	int sum = 1;
	if (input == 0) return sum; // Action 1 - special condition
	while (input>0){
		// Action 2
		sum *= input;
		input--;
	}
	return sum;
}

int sum_squares(input) {
	/*
	Logical idea: calculating the summary of all the factorial numbers.
	example: input = 4; sum_sqares = 4^2 + 3^2 + 2^2 + 1;
	*/
	int sum = 0;
	while (input>=0){ // including special condition
		// Action 1 - loop for calculating the summary
		sum += pow(input, 2);
		input--;
	}
	return sum;
}

void main() {
	int input;
	do {
		printf("Please enter positive number\n");
		scanf("%d", &input);
	} while (input < 0);
	int factorial_value = factorial(input);
	int sum_of_sqares_value = sum_squares(input);
	printf("The factorial value of %d ! is %d\n", input, factorial_value);
	printf("The sum of squares of %d ! is %d\n", input, sum_of_sqares_value);
}