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
	printf("\nplease enter the lower bound: ");
	num1 = inputIntNonNegative();
	printf("please enter the upper bound: ");
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
	/* Scheme:
	1. Checking sum value based on the input (positive or negative)
	2. Calculating the absolute value efficiently Based on the absolute value of the input (based on 3 cases)
	*/
	int sum = 0; // Summary value
	/* Seperation of positive and negative cases: */
	int positive_or_negative_sign = 1; // flag for the sum sign: 1 for positive values and -1 for negative values
	if (num1 < 0 || num2 < 0) {
		positive_or_negative_sign = -1;
	}
	/* Efficiency explaination by 3 cases:
	1. num1 > num2
	2. num1 < num2
	3.num1 == num2
	*/
	num1 = abs(num1);
	num2 = abs(num2);
	if (num1 > num2) { 
		/* Calculating the case of num1 > num2 */
		for (int i = 0; i < num2; i++) {
			sum += num1;
		}
		sum *= positive_or_negative_sign;
		return sum;
	}
	if (num1 < num2) {
		/* Calculating the case of num1 < num2 */
		for (int i = 0; i < num1; i++) {
			sum += num2;
		}
		sum *= positive_or_negative_sign;
		return sum;
	}
	/* Calculating the case of num1 == num2 */
	for (int i = 0; i < num1; i++) {
		sum += num2;
	}
	sum *= positive_or_negative_sign;
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
	/*Write Code Here!*/
}

/* ------------------- */