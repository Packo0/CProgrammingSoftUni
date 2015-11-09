/*
 * Write a program that prints the n-th digit of a number (from right to left).
 * If no such digit exists, print a dash "-".
Number      n       Result
2174        3       1
169         2       6
46          4       -
 */

#include <stdio.h>

int power(int base, int pow);

int main() {
    int num;
    unsigned int n;
    printf("Please enter an integer number: ");
    scanf("%d", &num);
    printf("Please enter the number of digit to show: ");
    scanf("%u", &n);

    int nDigitExtract = num / power(10, n - 1);

    if (nDigitExtract == 0) {
        printf("-\n");
    } else {
        printf("%d", nDigitExtract % 10);
    }

    return 0;
}

int power(int base, int pow) {
    int i, result = 1;
    for (i = 0; i < pow; i++) {
        result *= base;
    }

    return result;
}
