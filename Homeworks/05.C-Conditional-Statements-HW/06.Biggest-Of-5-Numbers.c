/*
 * Write a program that finds the biggest of five numbers by using only five if statements. Examples:
 a      b       c       d       e       biggest
 5      2       2       4       1       5.0
-2     -22      1       0       0       1.0
-2      4       3       2       0       4.0
 0     -2.5     0       5       5       5.0
-3     -0.5    -1.1    -2      -0.1    -0.1
 */

#include <stdio.h>

int main() {
    double a, b, c, d, e;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);
    printf("d = ");
    scanf("%lf", &d);
    printf("e = ");
    scanf("%lf", &e);

    double biggest = a;

    if (b > biggest) {
        biggest = b;
    }

    if (c > biggest) {
        biggest = c;
    }

    if (d > biggest) {
        biggest = d;
    }

    if (e > biggest) {
        biggest = e;
    }

    printf("Biggest num is %.2f", biggest);
    return 0;
}

