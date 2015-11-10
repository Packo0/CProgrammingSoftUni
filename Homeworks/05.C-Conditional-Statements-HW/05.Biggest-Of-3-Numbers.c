/*
 * Write a program that finds the biggest of three numbers. Examples:
 a       b       c       biggest
 5       2       2       5.0
-2      -2       1       1.0
-2       4       3       4.0
 0      -2.5     5       5.0
-0.1    -0.5    -1.1    -0.1
 */

#include <stdio.h>

int main() {
    double a, b, c;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    double biggest = a;

    if (b > biggest) {
        biggest = b;
    }

    if (c > biggest) {
        biggest = c;
    }

    printf("Biggest num is %.2f", biggest);
    return 0;
}

