# include <stdio.h>

int main() {

	int x = 8, y = 0; 

	// x ++
	y = x++; 
	printf("x = %d, y = %d \n", x, y);
	x = 8;
	y = 0;

	// ++ x 
	y = ++x;
	printf("x = %d, y = %d \n", x, y);
	x = 8;
	y = 0;

	// -- x 
	y = --x;
	printf("x = %d, y = %d \n", x, y);
	x = 8;
	y = 0;

	// x -- 
	y = x--;
	printf("x = %d, y = %d \n", x, y);
	x = 8;
	y = 0;

}