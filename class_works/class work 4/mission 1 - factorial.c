# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

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

void main() {
	int input;
	do {
		printf("Please enter positive number\n");
		scanf("%d", &input);
	} while (input < 0);
	int factorial_value = factorial(input);
	printf("The factorial value of %d ! is %d\n", input, factorial_value);

}