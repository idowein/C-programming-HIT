#define _CRT_SECURE_NO_WARNINGS
#define N 3
#include <math.h>

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
	printf("please enter the lower bound: \n");
	num1 = inputIntNonNegative();
	printf("please enter the upper bound: \n");
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
		// Calculating the case of num1 < num2
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
	// Calculating the case of num1 == num2 
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
	/*
	Scheme:
	1. find the range (min to max)
	2. use "prime" function for detecting and printing each prime number in the given range
	*/
	// Action 1
	int lower_num =num1;
	int max_num =  num2;
	printf("The prime numbers in that range are : ");
	// Action 2
	while (lower_num <= max_num) {
		if (prime(lower_num) == 1) {
			printf("%d, ", lower_num);
		}
		lower_num ++;
	}
	printf("and that's it!\n");
}

int prime(int num) {
	/* 
	Distinguishing between prime or not prime numbers
	Scheme: 
	1. input <= 1 is not prime (question definition)
	2. if input has any divider (between number bigger than 1 and his sqaure) that modulo division gives 0 is not a prime
	3. other case - prime
	*/
	double num_sqrt = sqrt(num);
	if (num <= 1) {
		// Action 1 - The defenition of the question 
		return 0; // not a prime number
	}
	if (num == 2) return 1;
	if (num % 2 == 0) return 0;
	// ___________________________________________________To check if num is num % 2 == 0 && if num == 2 
	for (int i = 3; i <= num_sqrt; i+=2) {
		// Action 2
		if ((num % i == 0)) {
			return 0; // not a prime number
		}
	}
	// Action 3
	return 1; // a prime number
}

int rotateNumber(int num, int spins) {
	/* 
	scheme:
	1. Check if spins % length == 0. if yes, there is no need for calculations. else: 
	2. In each iteration to find the left digit
	3. Paste the left digit in the right side of the number
	*/
	
	int num_length = numberLength(num);
	// Action 1
	if (spins % num_length == 0) {
		return num;
	}
	spins %= num_length; // making the iterations more efficient
	int division_num = pow(10, (num_length - 1)), left_digit, spinned_num = num;
	for (int i = 0; i < spins; i++) {
		left_digit = spinned_num / division_num; // Action 2
		spinned_num = (spinned_num % division_num) * 10 + left_digit; // Action 3
	}
	return spinned_num;
}

int numberLength(int num) {
	/*
	Return digit's length of input.
	Scheme:
	1. while input bigger than one digit value "cut" the last digit and increase the length in one.
	*/
	int length = 1;
	while (num > 9)
	{
		num /= 10;
		length ++;
	}
	return length;
}

int inputIntNonNegative() {
	/* Checking that the input number is not negative */
	int NonNegative;
	scanf("%d", &NonNegative);
	while (NonNegative < 0) {
		//while the input is negative keep get another input
		printf("This is negative number. Please enter positive numbers (input >= 0): \n");
		scanf("%d", &NonNegative);
	}
	printf("The input is: %d\n", NonNegative);
	return NonNegative;
}

/* ------------------- */