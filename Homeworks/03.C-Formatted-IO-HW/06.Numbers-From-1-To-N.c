/*
 *  Write a program that reads an integer number n from the console and prints
 *  all the numbers in the interval [1..n], each on a single line. Examples:
input output    input output        input   output
3     1         5     1             1       1
      2               2
      3               3
                      4
                      5
 */

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter an integer number: ");
    int matches = scanf("%d", &num);
    if (matches != 1) {
        printf("Wrong input\n");
        return 1;
    }

    for (i = 1; i <= num; i++) {
        printf("%d\n", i);
    }

    return 0;
}


