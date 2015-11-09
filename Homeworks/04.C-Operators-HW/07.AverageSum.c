/*
 * Write a program that finds the average of the sum of 3 numbers.
a       b       c       Average
45      41      20      35.33333
22      52      60      44.66667
 */

#include <stdio.h>

int main() {
    double a, b, c;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    double averageSum = (a + b + c) / 3;

    printf("The Average sum of %.0f %.0f and %.0f is %.5f\n", a, b, c, averageSum);
    return 0;
}
