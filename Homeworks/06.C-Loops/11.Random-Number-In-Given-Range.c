/*
 * Write a program that enters 3 integers n, min and max (min ≤ max) and prints
 * n random numbers in the range[min...max]. Examples:
n   min     max     random numbers
5   0       1       1 0 0 1 1
10  10      15      12 14 12 15 10 12 14 13 13 11
Note that the above output is just an example. Due to randomness,
 * your program most probably will produce different results.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n;
    printf("Please enter how many random numbers do you want: ");
    scanf("%d", &n);

    int min, max;
    printf("Enter the interval in which you want the random numbers\n");
    printf("min = ");
    scanf("%d", &min);
    printf("max = ");
    scanf("%d", &max);

    size_t seed = time(NULL);

    // Initialize random number generator
    srand(seed);
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", min + rand() % max + 1);
    }

    printf("\n");
    return 0;
}
