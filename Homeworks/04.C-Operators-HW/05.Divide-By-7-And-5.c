/*
 * Write a Boolean expression that checks for given integer if it can be divided
 * (without remainder) by 7 and 5 in the same time. Examples:
n           Divided by 7 and 5?
3           0
0           0
5           0
7           0
35          1
140         1
 */

#include <stdio.h>

int main() {
    int num;
    printf("PLease enter an integer: ");
    scanf("%d", &num);

    int isDividedWithoutRemainder = ((num % 5 == 0) && (num % 7 == 0));

    printf("Is the number %d is divided by 5 and 7 at the same time without remainder? -> %d\n",
            num, isDividedWithoutRemainder);
    return 0;
}
