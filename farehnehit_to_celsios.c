#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	double cels, far; // var definition

	printf("please enter a ferenheit number \n");
	scanf("%lf", &far);
	
	cels = 5 * (far - 32) / 9;
	printf("this is the value in celsius: %lf\n", cels);

}