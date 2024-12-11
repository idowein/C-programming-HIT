#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void main() {
    double a, b, c, des, root1, root2;

    // Input coefficients
    printf("Please enter 3 numbers (a, b, c):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    des = pow(b, 2) - 4 * a * c;
    printf("The discriminant is %lf\n", des);

    if (des >= 0) {
        // Calculate roots
        root1 = (-b + sqrt(des)) / (2 * a);
        root2 = (-b - sqrt(des)) / (2 * a);

        // Print roots
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
    }
    else {
        // No real roots
        printf("There is no solution (no real roots).\n");
    }
}
