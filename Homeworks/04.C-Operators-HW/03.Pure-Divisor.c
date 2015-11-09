/*
 *  Write a program that prints if a number is divided by 9, 11 or 13 without remainder.
n           Result
121         1
1263        0
26          1
23          0
81          1
1287        1
 */

#include <stdio.h>

int main() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);

    int isPureDivided = ((num % 9 == 0) || (num % 11 == 0) || (num % 13 == 0));

    printf("Is the number %d is pure divided by some of  the numbers 9 , 11 or 13? -> %d\n",
            num, isPureDivided);
    return 0;
}
