#define _CRT_SECURE_NO_WARNINGS

/*Libraries*/
#include <stdio.h>
#include <math.h>

/* Function declarations */
int arr_creating(int*);
void under_average_printing();
void above_average_printing();
/* Declarations of other sub-functions */
int value_QA();
/* ------------------------------- */

int main()
{
	int grades_arr[5] ;
	int grade_avg = arr_creating(&grades_arr[5]);
}

/* Function definitions */

int arr_creating(int *grades_arr) {
	int i = 0;
	int avg = 0;
	printf("Please enter your grades.\n");
	do {
		scanf_s("%d", &grades_arr[i]);
		while (grades_arr[i] < 0 || grades_arr[i]>100) {
			printf("Please enter valid grade\n");
			scanf_s("%d", &grades_arr[i]);
		}
		i++;
	} while (i < 5);

	for (int i = 0; i < 5; i++) {
		avg += grades_arr[i];
	}
	avg /= 5;
	printf("The avg is %d\n", avg);
	return avg;
}

/* Sub-function definitions */


/* ------------------- */