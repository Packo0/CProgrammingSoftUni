/*
 *  Write a program that that prints if the number is both greater than 20 and odd.

n       Result
63      1
17      0
22      0
23      1
20      0
 */

#include <stdio.h>

int main() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);

    int isOddAndBig = ((num % 2 != 0) && (num > 20));

    printf("Is the number %d odd and greater than 20? -> %d\n", num, isOddAndBig);

    return 0;
}
