#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

//This algorithm detect which kind of triangle is entered

void main(){
    int a,b,c; 
    printf("Please enter 3 sides of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);

    if(a==b){
        printf("this is a isosceles triangle\n");
    }else if(a==b && b==c){
        printf("This is an equilateral triangle\n");
    }else if(a+b>c || b+c>a|| a+c>b){
        printf("we can't build this triangle"); 
    }
}