#define _CRT_SECURE_NO_WARNINGS
#define N 3

/*Libraries*/
#include <stdio.h>
#include <math.h>

/* Function declarations */

void number_to_clock();

/* Declarations of other sub-functions */

int input_checker();

/* ------------------------------- */

int main()
{
	int input = input_checker();
	number_to_clock(input);
}

/* Function definitions */

void number_to_clock(input) {
	/*
	* Logical idea: presenting the numbers in butiful way
	* example: 00:54 am; 12:48 pm
	* Scheme:
	* dividing cases according to hours ( bigger than 12 or not)
	*/
	int hours = input / 100;
	int minutes = input % 100;
	if (hours > 11) {
		printf("Time is %d : %d pm", hours, minutes);
		return;
	}
	printf("Time is %d : %d am", hours, minutes);
}

/* Sub-function definitions */

int input_checker() {
	/*
	* Logical idea: Checking that the input can be an hour.
	* Scheme:
	* 1. Checking if the number is 4 digit long
	* 2. Checking if the hours and minutes reasonable
	* 3. return the valid input
	*/
	int input;
	do {
		printf("Please enter 4 digit number. The first 2 numbers will represent the hours and the next 2 will represent the minutes.\n");
		scanf("%d", &input);
	} while (input > 9999 || input < 0);
	int hours = input / 100;
	int minutes = input % 100;
	printf("The hour you entered is %d and the minutes is %d\n", hours, minutes);
	if (hours > 23 || minutes > 59) {
		do {
			printf("Input is invalid. Please enter new input:\n");
			scanf("%d", input);
		} while (hours > 23 || minutes > 59);
	}
	return input;
}
/* ------------------- */