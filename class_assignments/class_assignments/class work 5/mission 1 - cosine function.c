#define _CRT_SECURE_NO_WARNINGS
#define N 3

/*Libraries*/
#include <stdio.h>
#include <math.h>

/* Function declarations */

double cosine();

/* Declarations of other sub-functions */

int factorial();

/* ------------------------------- */

int main()
{
	int x, n;
	printf("Welcome to the Cosine calculator. please enter x value and iterations number.\n");
	scanf("%d%d", &x, &n);
	double cos_value= cosine(x, n);
	printf("Cos(%d) with %d iterations is %lf", x, n, cos_value);
}

/* Function definitions */

double cosine(x, n) {
	/*
	* Logical idea: creating function that calculates cosine of a value by given n iterations. (x^2n)/(2n!) - formula to a single number
	* Scheme:
	* 1. modulo 360 of x value - cos(0<x<360)
	* 2. sum the cosine value in the n place till n = 0
	* 3. splitting the summary to adders and substructors according to cosine series
	*/
	x = abs(x)%360; // cos(x) = cos(-x)
	double value_at_n_place, series_value = 0;
	for (int i = 1; i <= n; i += 2) { // Action 2
		value_at_n_place = pow(x, 2 * n) / factorial(2 * n);
		//Action 3
		if (i % 2 != 0) {
			series_value += value_at_n_place;
		}
		if (i % 2 == 0) {
			series_value -= value_at_n_place;
		}
		return series_value;
	}
}

/* Sub-function definitions */

int factorial(input) {
	/*
	* Logical idea: calculating x! = x(x-1)(x-2)...
	Scheme:
	1. special condition 0! = 1
	2. loop - duplicating all the numbers that bigger than 0
	*/
	int sum = 1;
	if (input == 0) return sum; // Action 1 - special condition
	while (input > 0) {
		// Action 2
		sum *= input;
		input--;
	}
	return sum;
}

/* ------------------- */