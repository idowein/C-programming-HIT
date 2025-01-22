#define _CRT_SECURE_NO_WARNINGS

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

/* Function declarations */

void array_one_step_changer(int*, int);

/* Sub-Function declarations */

int* arr_creating(int size);
void arr_printing(int* arr, int size);

/* ------------------------------- */

void main()
{
    // 1. Getting array from the user
    // 2. function - using temporary var and pointers to create dynamic arr

    int arr_size;
    printf("Please enter the size of the desired array:\n");
    scanf("%d", &arr_size);
    int* arr = arr_creating(arr_size);
    printf("The original array is: ");
    arr_printing(arr, arr_size);
    array_one_step_changer(arr, arr_size);
    arr_printing(arr, arr_size);


    // Free the dynamically allocated memory
    free(arr);
}

/* Function definitions */

void array_one_step_changer(int* arr, int size) {
    int temp;

    if (size == 0 || size == 1) {
        printf("Impossible to complete transaction.\n");
        return;
    }

    temp = arr[size - 1]; // Store the last element in temp

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }

    arr[0] = temp; // Assign the last element to the first position
}
/* Sub-function definitions */

int* arr_creating(int size) {
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

/* ------------------- */