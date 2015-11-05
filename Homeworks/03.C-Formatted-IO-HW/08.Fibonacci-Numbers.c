/*
 *  Write a program that reads a number n and prints on the console the first n
 *  members of the Fibonacci sequence (at a single line, separated by spaces):
 *  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ….. Examples:
n       comments
1       0
3       0 1 1
10      0 1 1 2 3 5 8 13 21 34
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    int i, oldOne = 0, oldTwo = 1, currentNum = 0;
    for (i = 1; i <= n; i++) {

        printf("%d ", currentNum);

        currentNum = oldOne + oldTwo;
        oldTwo = oldOne;
        oldOne = currentNum;
    }

    return 0;
}
