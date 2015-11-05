/*
 * Write a program that reads 3 real numbers from the console
 * and prints their sum. Examples:
    a       b       c       sum
    3       4       11      18.00
    -2      0       3       1.00
    5.5     4.5     20.1    30.10
 */

#include <stdio.h>
#include <math.h>

int main() {
    long double a, b, c, sum;
    printf("PLease enter three numbers separated with space: ");
    char matches = scanf("%llf %llf %llf", &a, &b, &c);
    if (matches != 3) {
        printf("Incorrect input\n");
        return -1;
    }

    sum = a + b + c;
    printf("%.2Lf + %.2Lf + %.2Lf = %.2Lf\n", a, b, c, sum);
    return 0;
}


