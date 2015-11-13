/*
 * Write a program that calculates with how many zeroes the factorial of a
 * given number n has at its end. Your program should work well for very big
 * numbers, e.g. n=100000. Examples:
n       trailing zeroes of n!   explaination
10      2                       3628800
20      4                       2432902008176640000
100000  24999                   think why
 */

#include <stdio.h>

long power(int, int);

int main() {
    int n;
    printf("Please enter n to know how many trailing zero there are in n!: ");
    scanf("%d", &n);

    int trailingZeroesSum = 0, i = 1, result = n / 5;
    while (result > 0) {
        result = n / power(5, i);

        trailingZeroesSum += result;
        i++;
    }

    printf("Trailing zeros - > %d\n", trailingZeroesSum);
    return 0;
}

long power(int x, int y) {
    int i;
    long result = 1;
    for (i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

