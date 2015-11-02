#include <stdio.h>
#include <math.h>
/*
 * Create a console application that calculates and prints
 * the square root of the number 12345.
 */
int main() {
    double number;
    printf("Enter number to print sqrt of it: ");
    scanf("%lf", &number);
    printf("Square root of %lf -> %lf\n", number, sqrt(number));
    printf("Square root of 12345 -> %f\n", sqrt(12345));
    return 0;
}