/*
 * Write a program to calculate the nth Catalan number by given n (1 < n < 100). Examples:
n   Catalan(n)
0   1
5   42
10  16796
15  9694845
 */

#include <stdio.h>

int main() {
    unsigned char n;
    printf("Please enter an integer (1 < n < 100): ");
    scanf("%u", &n);

    int i;
    long double result = 1;

    for (i = 2; i <= n; i++) {
        result = (result * (n + i)) / i;
    }

    printf("%.0llf", result);
    return 0;
}
