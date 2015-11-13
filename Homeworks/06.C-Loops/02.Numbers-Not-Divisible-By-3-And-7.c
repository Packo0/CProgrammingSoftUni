/*
 * Write a program that enters from the console a positive integer n and
 * prints all the numbers from 1 to n not divisible by 3 and 7, on a
 * single line, separated by a space. Examples:
n       output
3       1 2
10      1 2 4 5 8 10
 */

#include <stdio.h>

int main() {
    size_t n;
    printf("Please enter positive integer: ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 3 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
