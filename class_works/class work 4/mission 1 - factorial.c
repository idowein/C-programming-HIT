# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void drawing_first_triangle(base_length, symbol) {

	// a type triangle creating

	for (int counter = 0; counter < base_length; counter ++) { // running on the rows
		for (int i = -1; i < counter; i++) { // runnning on the base
			printf("%c", symbol);
		}
		printf("\n");

	}
}

void drawing_second_triangle(base_length, symbol) {

	// a type triangle creating

	for (int counter = 0; counter < base_length; counter++) { // running on the rows
		for (int i = 0 ; i < base_length - counter ; i++) { // printing the spaces in each row
			printf(" ");
		}
		for (int i = -1; i < counter; i++) {
			printf("%c", symbol);
		}
		printf("\n");

	}
}

void main() {

	// algorithm idea is drawing triangle accordig to user's desire

	char symbol;
	int base_length, triangle_type;

	// getting triangle type
	printf("Please enter which kind of triangle you would like to draw (1 or 2)\n");
	scanf("%d", &triangle_type);
	printf("you chose %d triangle type\n", triangle_type);
	while (triangle_type != 1 && triangle_type != 2) {
		printf("Ivalid input, please enter 1 or 2\n");
		scanf("%d", &triangle_type);
		printf("you chose %d triangle type\n", triangle_type);
	}

	// getting a symbol
	rewind(stdin);
	printf("Please enter which symbol would you like to draw\n");
	symbol = getchar();
	printf("you chose %c as a symbol\n", symbol);

	// getting a base length
	printf("Please enter which base length would you like define\n");
	scanf("%d", &base_length);
	printf("you chose %d as a base length\n", base_length);

	if (triangle_type == 1) {
		drawing_first_triangle(base_length, symbol);
	}

	if (triangle_type == 2) {
		drawing_second_triangle(base_length, symbol);
	}

}