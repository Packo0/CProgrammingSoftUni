/*
 * Write an expression that checks for given integer if its third digit from 
 * right-to-left is 7. Print true or false:
n               Third digit 7?
5               false
701             true
9703            true
877             false
777877          false
9999799         true
 */

#include <stdio.h>

int main() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);

    int isThirdDigitSeven = (((num / 100) % 10) == 7);

    printf("Is third digit(right to left) of %d 7? -> %s\n",
            num, isThirdDigitSeven ? "true" : "false");
    return 0;
}
