# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void main() {

	// algorithm idea is drawing triangle accordig to user's desire


	char triangle_type[] = "", symbol;
	int base_length, counter = 0;

	// getting triangle type
	printf("Please enter which kind of triangle you would like to draw\n");
	scanf("&s", triangle_type);
	printf("you chose %s as a string\n", triangle_type);
	rewind(stdin); // clear the input from keyboard

	// getting a symbol
	printf("Please enter which symbol would you like to draw\n");
	scanf("%c", &symbol);
	printf("you chose %c as a symbol\n", symbol);
	rewind(stdin); // clear the input from keyboard

	// getting a base length
	printf("Please enter which base length would you like define\n");
	scanf("%d", &base_length);
	printf("you chose %d as a base length\n", base_length);
	rewind(stdin); // clear the input from keyboard

	// triangle creating
	while (counter < base_length) {
		
		printf("%c", symbol);
		printf("\n");

	}


	


}