/*
 * Write a program that reads from the console a sequence of n integer numbers
 * and returns the minimal, the maximal number, the sum and the average of all
 * numbers (displayed with 2 digits after the decimal point). The input starts 
 * by the number n (alone in a line) followed by n lines, each holding an integer
 * number. The output is like in the examples below. Examples:
input       output               input      output
3           min = 1.00           2          min = -1.00
2           max = 5.00          -1          max = 4.00
5           sum = 8.00222        4          sum = 3.00
1           avg = 2.67                      avg = 1.50
 */

#include <stdio.h>

int main() {
    int n;
    printf("Please enter positive integer: ");
    scanf("%d", &n);

    int i;
    double min, max, sum = 0, avg = 0;
    for (i = 1; i <= n; i++) {
        double currentNum;
        printf("num%d = ", i);
        scanf("%lf", &currentNum);
        if (i == 1) {
            min = currentNum;
            max = currentNum;
        }

        sum += currentNum;

        if (currentNum >= max) {
            max = currentNum;
        }

        if (currentNum <= min) {
            min = currentNum;
        }
    }

    avg = sum / n;

    printf("min = %.2f\n", min);
    printf("max = %.2f\n", max);
    printf("sum = %.2f\n", sum);
    printf("avg = %.2f\n", avg);
    return 0;
}


