/*
 * Write a program that reads from the console a positive integer number
 * n (1 ≤ n ≤ 20) and prints a matrix holding the numbers from 1 to n*n in
 * the form of square spiral like in the examples below. Examples:
n       matrix      n       matrix      n           matrix
2       1 2         3       1 2 3       4           1  2  3  4
        4 3                 8 9 4                   12 13 14 5
 3                          7 6 5                   11 16 15 6
                                                    10 9  8  7
 */

#include <stdio.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    int i;
    int row, col, sp;
    int counter = 1;
    int right = 1,
            down = 0,
            left = 0,
            up = 0;
    int matrix[n][n];

    row = 0;
    col = 0;
    sp = 0;
    for (i = 0; i < n * n; i++) {
        if (right) {
            matrix[row][col++] = i + 1;
            if (col == n - 1 - sp) {
                down = 1;
                right = 0;
            }
        } else if (down) {
            matrix[row++][col] = i + 1;
            if (row == n - 1 - sp) {
                down = 0;
                left = 1;
            }
        } else if (left) {
            matrix[row][col--] = i + 1;
            if (col == sp) {
                left = 0;
                up = 1;
            }
        } else if (up) {
            matrix[row--][col] = i + 1;
            if (row == sp + 1) {
                up = 0;
                right = 1;
                sp++;
            }
        }
    }

    // print the matrix
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%3d ", matrix[row][col]);
        }

        printf("\n");
    }

    return 0;
}

