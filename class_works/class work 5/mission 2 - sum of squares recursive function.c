#define _CRT_SECURE_NO_WARNINGS
#define N 3

/*Libraries*/
#include <stdio.h>
#include <math.h>

/* Function declarations */

int sum_squares();

/* Declarations of other sub-functions */

int input_checker();

/* ------------------------------- */

int main()
{
	int input = input_checker();
	int sum_of_squars_value = sum_squares(input);
	printf("Sum of sqares of %d is %d", input, sum_of_squars_value);
}

/* Function definitions */

int sum_squares(input) {
	/*
	Logical idea: calculating the summary of all the factorial numbers.
	recursive logical idea: stop when you reach 1;
	example: input = 4; sum_sqares = 4^2 + 3^2 + 2^2 + 1;
	*/
	if (input == 1) {
		return 1;
	}
	return pow(input, 2) + sum_squares(input -1);
}

/* Sub-function definitions */

int input_checker() {
	int num;
	do {
		printf("Please enter non-negative number.\n");
		scanf("%d", &num);
	} while (num < 0);
	return num;
}

/* ------------------- */