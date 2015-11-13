/*
 * Write a program that enters from the console a positive integer n and prints
 * all the numbers from 1 to n, on a single  line, separated by a space. Examples:
n   output
3   1 2 3
5   1 2 3 4 5
 */

#include <stdio.h>

int main() {
    size_t n;
    printf("Please enter positive integer: ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}
