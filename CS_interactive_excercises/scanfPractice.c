#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	double d = 0.0, result;
	int x=0, y=0, z=0;
	printf("Enter 3 (x,y,z) integers and a double (d)\n");
	scanf("%d%d%d%lf", &x,&y,&z,&d);
	result = x+y/d*z;
	printf("x=%d, y=%d, z=%d, d=%lf, result=%lf \n" ,x,y,z,d,result);

		return 0;
}