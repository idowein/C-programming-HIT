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

int halves_equal(char*);

/* Declarations of other sub-functions */

/* ------------------------------- */

int main()
{
	// data initialization
	char arr1[] = {"abcabc"};
	char arr2[] = { "abcdefg"};
	printf("sizes of arrs are : arr 1 - %d, arr 2 - %d\n", strlen(arr1), strlen(arr2));
	int arr1_simetry = halves_equal(arr1);
	int arr2_simetry = halves_equal(arr2);
	printf("arr 1 simetry - %d, arr 2 simetry - %d", arr1_simetry, arr2_simetry);
}

/* Function definitions */

int halves_equal(char* str) {
	int half;
	int len = strlen(str);
	printf("len of string : %d\n", len);
	if (len % 2 == 0) {
		half = strlen(str) / 2;
		for (int i = 0; i < half; i++) {
			if (str[i] != str[i + half]) {
				return 0;
			}
		}
		return 1;
	}
	if (len % 2 != 0) {
		half = len / 2 + 1;		// represent the defferntial in the array of not zugi arr
		for (int i = 0; i < half ; i++) {
			if (str[i] != str[i + half]) {
				return 0;
			}
		}
		return 1;
	}
}

/* sub-Function definitions */

/* ------------------------------- */