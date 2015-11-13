/*
 * Write a program that calculates n! / k! for given n and k (1 < k < n < 100).
 * Use only one loop. Examples:
n   k   n! / k!
5   2   60
6   5   6 
8   3   6720
 */

#include <stdio.h>

int main() {
    long long n, k, i, j;
    printf("Please enter n and k with interval: ");
    scanf("%lld %lld", &n, &k);
    long long result = 1, nominator = 1, denominator = 1;
    for (i = 1, j = 1; i <= n; i++, j++) {
        nominator *= i;
        if (j <= k) {
            denominator *= i;
        }
    }

    result = nominator / denominator;
    printf("%lld\n", result);
    return 0;
}
