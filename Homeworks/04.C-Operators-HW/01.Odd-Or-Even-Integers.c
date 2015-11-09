/*
 *  Write an expression that checks if given integer is odd or even. Examples:
 n       Odd?
 3       1
 2       0
-2       0
-1       1
 0       0
 */

#include <stdio.h>

int main() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);

    int isOdd = (num % 2 != 0);

    printf("Is the number %d odd? -> %d\n", num, isOdd);

    return 0;
}
