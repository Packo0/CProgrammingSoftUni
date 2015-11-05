/*
 *  Write a program that enters 5 numbers 
 * (given in a single line, separated by a space), calculates and prints their
 * sum. Examples:
numbers                     sum
1    2     3     4   5      15.00
10   10    10    10  10     50.00
1.5  3.14  8.2  -1   0      11.84
 */

#include <stdio.h>

int main() {
    double a, b, c, d, e, f, sum;
    int matches = scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    if (matches != 5) {
        printf("Invalid input\n");
        return 1;
    }

    sum = a + b + c + d + e + f;
    printf("Sum = %.2f\n", sum);
    return 0;
}


