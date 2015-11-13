/*
 * Write a program that reads from the console a positive integer number n(1 ≤ n ≤ 20)
 * and prints a matrix like in the examples below. Use two nested loops. Examples:
n       matrix      n       matrix      n       matrix
2       1 2         3       1 2 3       4       1 2 3 4
        2 3                 2 3 4               2 3 4 5
                            3 4 5               3 4 5 6
                                                4 5 6 7
 */

#include <stdio.h>

int main() {
    size_t n;
    printf("Please enter an integer (1 <= n <= 20): ");
    scanf("%lu", &n);

    int row, col, counter;

    for (row = 1; row <= n; row++) {
        counter = row;

        for (col = 1; col <= n; col++) {
            printf("%d ", counter++);
        }

        printf("\n");
    }
    return 0;
}
