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

int num_of_self_divided(int arr[], int, int*,  int* );

/* Declarations of other sub-functions */

int is_divided_by_its_digits(int arr_element);

/* ------------------------------- */

int main()
{
	// data initialization
	int arr_size = 12;
	int arr[] = { 13, 124, 8208, 95, 15, 21, 648, 4000, 507, 1555, 412131, 72 };
	int min, max;
	num_of_self_divided(arr, arr_size, &min, &max);
	printf("max val is : %d , min val is : %d\n", max, min);
}

/* Function definitions */

int num_of_self_divided(int arr[],int size, int* p_min, int* p_max) {
	int num_of_self_divided = 0;
	*p_max = 0;
	*p_min = 0;
	for (int i = 0; i < size; i++) {	// running all over array numbers
		printf("current num is : %d\n", arr[i]);
		if (is_divided_by_its_digits(arr[i]) == 1) {
			num_of_self_divided++;
			if (arr[i] > *p_max) {
				*p_max = arr[i];
			}
			if (arr[i] < *p_min) {
				*p_min = arr[i];
			}
		}
	}
	if (num_of_self_divided == 0) {
		printf("there are no self dividers !");
		p_max = 0;
		p_min = 0;
	}
	printf("num of self deviders is: %d .\n", num_of_self_divided);
	return num_of_self_divided;
}

/* sun-Function definitions */

int is_divided_by_its_digits(int arr_element) {
	/*Defying if certain number is divided by it's digits*/
	int digit, temp = arr_element;
	while (temp > 0) {
		digit = temp % 10;
		if (digit != 0 && arr_element % digit != 0) {
			return 0;
		}
		temp /= 10;
	}
	printf("%d is a self divider!\n", arr_element);
	return 1;
}



/* ------------------------------- */