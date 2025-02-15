#define _CRT_SECURE_NO_WARNINGS
#define N 3

/*Libraries*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Include stdlib for malloc and free

/*
    Assigned by:
        Ido Weinstock, Group 3
*/

/* Function declarations */

int num_of_squared_perfect();

/* Declarations of other sub-functions */

int is_squared_perfect();
void data_allocation(int*, int);
void print_array(int*, int); // Declare the print function

/* ------------------------------- */

int main()
{
    int arr_size;
    int* arr, p_max = 0;

    printf("Please enter array size: \n");
    scanf("%d", &arr_size); // Read the size

    arr = (int*)malloc(arr_size * sizeof(int)); // Allocate memory for the array
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    data_allocation(arr, arr_size);

    print_array(arr, arr_size); // Print the contents of the array

    num_of_squared_perfect(arr, arr_size, &p_max);

    free(arr); // Free the allocated memory
    return 0;
}

/* Function definitions */

int num_of_squared_perfect(int* arr, int size, int* p_max) {
    int counter = 0;
    *p_max = 0;
    for (int i = 0; i < size; i++) {
        if (is_squared_perfect(arr[i]) == 1) {
            counter++;
            if (arr[i] > *p_max) {
                *p_max = arr[i];
            }
        }
    }
    printf("%d is the max perfect number!\n", *p_max);
}

/* sub-Function definitions */

void data_allocation(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Please enter the element in the %d place:\n", i);
        scanf("%d", &arr[i]); // Use & to pass the address
    }
}

void print_array(int* arr, int size) {
    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int num_of_digits(int num) {
    int counter = 0;
    while (num != 0) {
        num /= 10;
        counter++;
    }
    return counter;
}

int is_squared_perfect(int num) {
    int sum = 0;
    int digits = num_of_digits(num);
    int temp = num;
    for (int i = 0; i < digits; i++) {
        sum += (int)pow(temp%10, digits); // Cast the result of pow to int
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is a perfect num!\n", num); // Add num as argument to printf
        return 1;
    }
    return 0;
}

/* ------------------------------- */
