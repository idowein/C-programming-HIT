#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){

    int num, x, y, z;
    printf("Please enter 3 digit number \n");
    scanf("%d", &num);
    int digitUnit = num % 10; 
    int tensUnit = (num / 10) % 10; 
    int hundredsUnit = num / 100;
    printf("digit unit is = %d \n", digitUnit);
    printf("tens unit is = %d\n", tensUnit);
    printf("undreds unit is = %d\n", hundredsUnit);
    int sum = digitUnit + tensUnit + hundredsUnit; 
    printf("sum = %d\n", sum);
}