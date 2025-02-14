#define _CRT_SECURE_NO_WARNINGS

/*Libraries*/
#include <stdio.h>
#include <math.h>

/* Function declarations */
float get_array_from_user(int*, int);
int* get_input(int*);
/* Declarations of other sub-functions */

/* ------------------------------- */

void main()
{
	float avg;
	int below_avg = 0, size, i, val;
	int* arr = NULL;
	arr = get_input(&size);
	avg = get_array_from_user(arr, size);
	for (i = 0; i < size; i++) {
		val = arr[i];
		if (val < avg) {
			below_avg++;
		}
		else {
			printf("%d above avg \n", val);
		}
	}
}

/* Function definitions */

float get_array_from_user(int* p, int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += p[i];
	}
	return sum / size;
}

int* get_input(int* arr_size) {
	int input, k = 0, size;
	int* p;
	printf("Enter arr size\n");
	scanf("%d", &size);
	p = (int*)malloc(size * sizeof(int)); // Create dinamically (array depends on client) the array in the desired size
	for (k = 0; k < size; k++) {
		do {
			printf("Print grade number %d\n", k);
			scanf("%d", &input);
		} while (input<0 || input>100);
		p[k] = input;
	}
	*arr_size = size; // changing the referenced size
	return p;
}

/* Sub-function definitions */

/* ------------------- */