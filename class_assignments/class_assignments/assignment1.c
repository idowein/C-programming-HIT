#define _CRT_SECURE_NO_WARNINGS
#define N 3

/*Libraries*/
#include <stdio.h>
#include <math.h>

/*
	Assigned by:
		Ido Weinstock, Group 3 #211677083
*/

/* Function declarations */

void char_place_changing(char*, char*, char*);

/* Declarations of other sub-functions */

void data_collection(char*, char*, char*);

/* ------------------------------- */

int main()
{
	// Allocate memory for character pointers
	char ch1, ch2, ch3;
	data_collection(&ch1, &ch2, &ch3);

	// Output collected data
	printf("Collected characters are: %c, %c, %c\n", ch1, ch2, ch3);

	// changing chars order
	char_place_changing(&ch1, &ch2, &ch3);
	printf("The numbers after changing the order are: ch1 - %c, ch2 - %c, ch3 - %c", ch1, ch2, ch3);
}

/* Function definitions */

void char_place_changing(char* ch1, char* ch2, char* ch3) {
	char temp = *ch1;
	*ch1 = *ch2;
	*ch2 = *ch3;
	*ch3 = temp;
}

/* sun-Function definitions */

void data_collection(char *ch1, char* ch2, char* ch3) {
	
	printf("Please enter 3 characters.\n");
	*ch1 = getchar();
	printf("char 1 is : %c\n", *ch1);
	printf("please enter the second\n");
	while ((getchar()) != '\n'); // Consume newline character
	*ch2 = getchar();
	printf("char 2 is : %c\n", *ch2);
	printf("please enter the third\n");
	while ((getchar()) != '\n'); // Consume newline character
	*ch3 = getchar();
	printf("char 3 is : %c\n", *ch3);
}

/* ------------------------------- */