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

/* Declarations of other sub-functions */
int even_or_odd(char* str);
/* ------------------------------- */

int main()
{
    char str1[] = "abcabc";
    char str2[] = "abcdabc";
    even_or_odd(&str1);
    even_or_odd(&str2);
}

/* Function definitions */

void str_reverse(char* str) {
    int half = half_clac(str);
    if (even_or_odd(str) == 0) {
        int temp = 0;
        int end_of_half_arr = half - 1;
        for (int i = 0; i < half; i++) {
            temp = str[i];
            str[i] = str[end_of_half_arr];
            str[end_of_half_arr] = temp;
            end_of_half_arr--;
        }
        end_of_half_arr = strlen(str) - 1;
        for (int i = half; i < strlen(str); i++) {
            temp = str[i];
            str[i] = str[end_of_half_arr];
            str[end_of_half_arr] = temp;
            end_of_half_arr--;
        }
    }
}

/* sub-Function definitions */

int even_or_odd(char* str) {
    if (strlen(str) % 2 == 0) {
        printf("This series has even elemnts number\n"); 
        return 0;   // even number
    }
    printf("This series has odd elemnts number\n");
    return 1;   // odd number
}

int half_clac(char* str) {
    if (even_or_odd(str) == 0) {
        return strlen(str) / 2; // even num
    }
    return strlen(str) / 2 + 1; // odd num
}

/* ------------------------------- */
