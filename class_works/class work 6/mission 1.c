#define _CRT_SECURE_NO_WARNINGS

/*Libraries*/
#include <stdio.h>
#include <math.h>

/* Function declarations */

/* Declarations of other sub-functions */

/* ------------------------------- */

int main()
{
	int grades_arr[6];
	int i = 0;
	double avg = 0;
	printf("Please enter your grades.\n");
	do {
		scanf_s("%d", &grades_arr[i]);
		while (grades_arr[i] < 0 || grades_arr[i]>100) {
			printf("Please enter valid grade\n");
			scanf_s("%d", &grades_arr[i]);
		}
	} while (i < 6);

	for (int i = 0; i < 6; i++) {
		avg += arr[i];
	}
	avg /= 5;

	printf("The avg is %lf\n", avg);

}

/* Function definitions */


/* Sub-function definitions */


/* ------------------- */