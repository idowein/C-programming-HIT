# include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	// calculating the sum of the digits in a number and how many digits in it

	int input, dig, count = 0, sum = 0;
	printf("Enter a num\n");
	scanf_s("%d", &input);

	do {

		dig = input % 10;
		sum += dig;
		count++;
		input /= 10;

	} while (dig!=0 || input > 0);

	count --;
	printf("The sum is %d and the count is %d", sum, count);

}