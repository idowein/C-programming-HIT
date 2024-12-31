#define _CRT_SECURE_NO_WARNINGS
#define N 3

/*Libraries*/
#include <stdio.h>

/*
	Assigned by:
		Ido Weinstock, Group 3 #211677083
		Evyatar Hagay, Group 4 #209164250
*/

/* Function declarations */

void Ex1();
void Ex2();
void Ex3();

/* Declarations of other sub-functions */

int multiplication(int, int);

void primeNumbers(int, int);
int prime(int);

int rotateNumber(int, int);
int numberLength(int);

int inputIntNonNegative();

/* ------------------------------- */

int main()
{
	int select = 0, i, all_Ex_in_loop = 0;
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
	if (scanf("%d", &all_Ex_in_loop) == 1)
		do
		{
			for (i = 1; i <= N; i++)
				printf("Ex%d--->%d\n", i, i);
			printf("EXIT-->0\n");
			do {
				select = 0;
				printf("please select 0-%d : ", N);
				scanf("%d", &select);
			} while ((select < 0) || (select > N));
			switch (select)
			{
			case 1: Ex1(); break;
			case 2: Ex2(); break;
			case 3: Ex3(); break;
			}
		} while (all_Ex_in_loop && select);
	return 0;
}


/* Function definitions */

void Ex1() {
	int num1 = 0, num2 = 0, answer = 0;
	printf("\nplease enter two multipliers: \n");
	scanf("%d%d", &num1, &num2);
	answer = multiplication(num1, num2);
	printf("%d * %d = %d\n", num1, num2, answer);
}

void Ex2() {
	int num1 = 0, num2 = 0;
	printf("\nplease enter the lower bound: \n");
	num1 = inputIntNonNegative();
	printf("\nplease enter the upper bound: \n");
	num2 = inputIntNonNegative();
	primeNumbers(num1, num2);
}

void Ex3() {
	int number = 0, spins = 0, answer = 0;
	printf("\nplease enter the number: ");
	number = inputIntNonNegative();
	printf("please enter the amount of spins: ");
	spins = inputIntNonNegative();
	answer = rotateNumber(number, spins);
	printf("The number %d after %d spins is: %d\n", number, spins, answer);
}

/* Sub-Function definitions */

int multiplication(int num1, int num2) {
	/*
	Scheme: 
	1. Checking sum value's sign (positive or negative)
	2. Calculating the value efficiently
	*/
	// Action number 1 - Checking sum value's sign
	int sum_sign = 1;
	if (num1 < 0 || num2 < 0) {
		sum_sign = -1;
	}
	if (num1 < 0 && num2 < 0) {
		sum_sign = 1;
	}
	int sum = 0; // Summary value
	/* 
	Action 2 - Efficiency explaination by 3 cases:
	1. num1 > num2
	2. num1 < num2
	3.num1 == num2
	*/
	if (abs(num1) > abs(num2)) { 
		/* Calculating the case of num1 > num2 */
		for (int i = 0; i < abs(num2); i++) {
			if (sum_sign == 1) {
				sum += abs(num1);
			}
			if (sum_sign == -1) {
				sum -= abs(num1);
			}
		}
		return sum;
	}
	if (abs(num1) < abs(num2)) {
		/* Calculating the case of num1 < num2 */
		for (int i = 0; i < abs(num1); i++) {
			if (sum_sign == 1) {
				sum += abs(num2);
			}
			if (sum_sign == -1) {
				sum -= abs(num2);
			}
		}
		return sum;
	}
	/* Calculating the case of num1 == num2 */
	for (int i = 0; i < abs(num1); i++) {
		if (sum_sign == 1) {
			sum += abs(num1);
		}
		if (sum_sign == -1) {
			sum -= abs(num1);
		}
	}
	return sum;
}

void primeNumbers(int num1, int num2) {
	/*Write Code Here!*/
}

int prime(int num) {
	/*Write Code Here!*/
}

int rotateNumber(int num, int spins) {
	/*Write Code Here!*/
}

int numberLength(int num) {
	/*Write Code Here!*/
}

int inputIntNonNegative() {
	int NonNegative;
	scanf("%d", &NonNegative);
	while (NonNegative < 0) {
		//rewind(NonNegative);
		printf("This is negative number. Please enter positive numbers (input >= 0): \n");
		scanf("%d", &NonNegative);
	}
	printf("The input is: %d", NonNegative);
	return NonNegative;
}

/* ------------------- */