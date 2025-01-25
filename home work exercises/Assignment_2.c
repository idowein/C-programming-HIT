#define _CRT_SECURE_NO_WARNINGS
#define N 4

/*Libraries*/
#include <stdio.h>

/*
	Assigned by: 
		Student1_Full_Name #ID 
		Student2_Full_Name #ID
*/

/* Function declarations */

void Ex1();
void Ex2();
void Ex3();
void Ex4();

/* Declarations of other sub-functions */

int equalArrays(int[], int[], int, int);
int equalArraysSameSize(int[], int[], int);

void SelectionSort(int [], int);
void swap(int*, int*);
void maxItem(int[], int, int*);

int sortRemoveDup(int [], int);

void printArr(int [], int);

char findFirstVowel(char*);

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
			case 4: Ex4(); break;
			}
		} while (all_Ex_in_loop && select);
		return 0;
}


/* Function definitions */

void Ex1() {
	int A[] = { 1,2,5,3 }, B[] = { 1,2,3,5 }, // Initialize the arrays
		sizeA = sizeof(A)/sizeof(int), sizeB = sizeof(B)/sizeof(int);
	printf("\n%s\n\n", equalArrays(A, B, sizeA, sizeB) ? "Arrays are equal" : "Arrays are not equal");
}

void Ex2() {
	int ar[] = { 56, 32, 5, 90, 40, 42, 19 }, // Initialize the array
		size = sizeof(ar) / sizeof(int);
	SelectionSort(ar, size);
	printf("\nSorted array:\n");
	printArr(ar, size);
	printf("\n");
}

void Ex3() {
	int ar[] = { 56, 32, 56, 90, 56, 32, 19, 56, 31, 32 }, // Initialize the array
		size = sizeof(ar) / sizeof(int), new_size = 0;
	SelectionSort(ar, size); // Sort the source array
	printf("\nArray with duplications:\n");
	printArr(ar, size);
	new_size = sortRemoveDup(ar, size);
	printf("\nArray without duplications:\n");
	printArr(ar, new_size);
	printf("\n");
}

void Ex4() {
	char str[] = "Her name is Ann", // Initialize the string
		firstVowel;
	firstVowel = findFirstVowel(str);
	if (firstVowel)
		printf("\nThe first vowel is %c\n", firstVowel);
	else
		printf("\nNo vowels in the string\n");
}

/* Sub-Function definitions */

int equalArrays(int A[], int B[], int sizeA, int sizeB) {
	/*Scheme:
	1. cheking if array size are equal
	2. Checking if the arrays are equal - calling to function equalArraysSameSize
	*/
	if (sizeA != sizeB) {
		return 0;
	}
	return equalArraysSameSize(A, B, sizeA);
}

int equalArraysSameSize(int A[], int B[], int size) {
	/*Scheme;
	1.Checking recoursively if the arrays are equal
	*/
	size--; // index - last number in the array
	if (A[size] != B[size]) { 
		return 0;
	}
	if (size == 0) {
		return 1;
	}
	return equalArraysSameSize(A, B, size--);
}

void SelectionSort(int ar[], int n) {
	/*Scheme
	1. find 
	*/
	int d = 0;
	int* max_val_place = 0;
	int* last_ar_item = ar[n - 1];
	while (d < n) {
		maxItem(ar, (n-d), max_val_place);
		swap(max_val_place, last_ar_item);
		d++;
	}
}

void swap(int* x, int* y) {
	/*Scheme:
	1. generating temp value <- max
	*/
	int* temp = y;
	y = x;
	x = temp;
}

void maxItem(int ar[], int size, int *p_max) {
	/*Scheme:
	1. find the maximum item place in the array.
	2. pointing on the max value place
	*/
	*p_max = 0; // initializng pointer value
	for (int i = 1; i < size; i++) {
		if (ar[i] > ar[*p_max]) {
			*p_max = i; // pointing on the max value place
		}
	}
}

int sortRemoveDup(int ar[], int n) {
	/*Write Code Here!*/
}

void printArr(int ar[], int size) {
	/*Write Code Here!*/
}

char findFirstVowel(char* str) {
	/*Write Code Here!*/
}

/* ------------------- */