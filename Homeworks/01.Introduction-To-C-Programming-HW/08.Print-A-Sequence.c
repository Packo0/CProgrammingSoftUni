/*
 * Write a program that read a number n from the console and then finds
 *  the first n members from the sequence, starting from 2. 
 * Input    Expected Output     
       5    2 -3 4 -5 6         
 *     2    2 -3
 *     9    2 -3 4 -5 6 -7 8 -9 10 
 */
#include <stdio.h>

int main() {
    int n, i;
    printf("Please enter an integer number: ");
    scanf("%d", &n);

    for (i = 2; i <= n + 1; i++) {
        if (i % 2) {
            printf("%d ", -i);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}


