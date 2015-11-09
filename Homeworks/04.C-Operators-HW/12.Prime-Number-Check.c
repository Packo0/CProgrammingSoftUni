/*
 * Write an expression that checks if given positive integer number n (n ≤ 100)
 * is prime (i.e. it is divisible without remainder only to itself and 1).
 * Print true or false:

 n      Prime?
 1      false
 2      true
 3      true
 4      false
 9      false
 97     true
 51     false
-3      false
 0      false
 */

#include <stdio.h>
#include <math.h>

int main() {
    int numToCheck, isPrime = 1, i;
    printf("Please enter an integer number to check(n ≤ 100): ");
    scanf("%d", &numToCheck);
    int maxDividor = sqrt(numToCheck);

     if (numToCheck == 1 || numToCheck == 0 || numToCheck < 0) {
        isPrime = 0;
        printf("Is %d prime? -> %s\n", numToCheck, isPrime ? "true" : "false");
        return 0;
    }

    for (i = 2; i <= maxDividor; i++) {
        if (numToCheck % i == 0) {
            isPrime = 0;
            break;
        }
    }

    printf("Is %d prime? -> %s\n", numToCheck, isPrime ? "true" : "false");
    return 0;
}

