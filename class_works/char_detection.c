#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

//This algorithm detect which kind of char is entered. 

void main(){

char ch; 
printf("Please enter a char: \n"); 
scanf("%c", &ch); 

if(ch>='A' && ch<='Z'){
    printf("%c is a upprcase alphabet\n", ch);
}else if(ch>='a' && ch<='z'){
    printf("%c is a lowercase alphabet\n", ch);
}else if(isdigit(ch)){
    printf("%c is a digit\n", ch);
}else{
    printf("%c is shit", ch);
}
}

