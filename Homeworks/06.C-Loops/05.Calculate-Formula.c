/*
 * Write a program that, for a given two integer numbers n and x, calculates
 * the sum S = 1 + 1!/x + 2!/x^2 + … + n!/x^n. Use only one loop. 
 * Print the result with 5 digits after the decimal point.
n       x       S
3       2       2.75000
4       3       2.07407
5      -4       0.75781
 */

#include <stdio.h>

int main() {
    int n, x, i;
    scanf("%d %d", &n, &x);
    double sum = 1, nominator = 1, denominator = 1;
    for (i = 1; i <= n; i++) {
        nominator *= i;
        denominator *= x;
        sum += nominator / denominator;
    }

    printf("%.5f\n", sum);
    return 0;
}


