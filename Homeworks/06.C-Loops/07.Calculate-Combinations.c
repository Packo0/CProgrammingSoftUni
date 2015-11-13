/*
 * In combinatorics, the number of ways to choose k different members out of a
 * group of n different elements (also known as the number of combinations) is
 * calculated by the following formula: n! / (k! * (n-k)!). For example, there
 * are 2598960 ways to withdraw 5 cards out of a standard deck of 52 cards. Your
 * task is to write a program that calculates for given n and k
 * (1 < k < n < 100). Try to use only two loops. Examples:
n   k   n! / (k! * (n-k)!)
3   2   3
4   2   6
10  6   210
52  5   2598960
 */

#include <stdio.h>

int main() {
    unsigned long long n, k;
    int i;
    printf("Please enter n and k with interval: ");
    scanf("%llu %llu", &n, &k);

    unsigned long long result = 1, nMinusKFact = 1;

    // we divide n! by k! so i starts from k + 1 and number of loops are
    // exactly n - k. So we start to calculate nMinusKFact from 1 to n - k
    // as we divide result to 1 in the 1st iteration, to 2 - 2nd iteration and so on.
    for (i = k + 1; i <= n; i++) {
        result = (result  * i) / nMinusKFact++;
    }

    printf("%lld\n", result);
    return 0;
}
