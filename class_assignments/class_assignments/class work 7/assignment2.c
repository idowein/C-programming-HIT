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



/* Declarations of other sub-functions */

int* data_collection(int);
void arr_printing(int*, int);

/* ------------------------------- */

int main()
{
	int n; // number of elements
	printf("please enter number of elements in the array\n");
	scanf_s("%d", &n);

	// Dynamically allocate memory using malloc()
	int*arr = data_collection(n);
	arr_printing(arr, n);

	// Free the dynamically allocated memory
	free(arr);
}

/* Function definitions */



/* sub-Function definitions */

int* data_collection(int size) {
	int* p = (int*)malloc(size * sizeof(int));

	if (p == NULL) {
		printf("Memory allocation failed!\n");
		exit(1);
	}

	for (int k = 0; k < size; k++) {
		printf("Please enter input for index %d: ", k);
		scanf("%d", &p[k]); // Store input directly in the array
	}

	return p;
}

void arr_printing(int* arr, int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d,", arr[i]);
	}
	printf("]\n");
}

/* ------------------------------- */