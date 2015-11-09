/*
 * Write a program that takes as input a four-digit number in format abcd
 * (e.g. 2011) and performs the following:
 Calculates the sum of the digits (in our example 2+0+1+1 = 4).
 Prints on the console the number in reversed order: dcba (in our example 1102).
 Puts the last digit in the first position: dabc (in our example 1201).
 Exchanges the second and the third digits: acbd (in our example 2101).
The number has always exactly 4 digits and cannot start with 0. Examples:
n       sum of digits   reversed    last digit      second and third
                                    in front        digits exchanged
2011    4               1102        1201            2101
3333    12              3333        3333            3333
9876    30              6789        6987            9786
 */

#include <stdio.h>

int main() {
    int num;
    printf("Please enter an 4 digit integer number: ");
    scanf("%d", &num);

    int a = (num / 1000) % 10;
    int b = (num / 100) % 10;
    int c = (num / 10) % 10;
    int d = (num / 1) % 10;
    int sumOfDigits = a + b + c + d;

    printf("Sum of digits: %d\n", sumOfDigits);
    printf("Reversed: %d%d%d%d\n", d, c, b, a);
    printf("Last digit in front: %d%d%d%d\n", d, a, b, c);
    printf("Second and third digits exchanged: %d%d%d%d\n", a, c, b, d);
    return 0;
}
