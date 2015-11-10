/*
 * Write a program that enters 3 real numbers and prints them sorted in 
 * descending order. Use nested if statements. Don’t use arrays and the built-in
 * sorting functionality. Examples:
 a      b       c       result
 5      1       2       5.0 2.0 1.0
-2     -2       1       1.0 -2.0 -2.0
-2      4       3       4.0 3.0 -2.0
 0     -2.5     5       5.0 0.0 -2.5
-1.1   -0.5    -0.1    -0.1 -0.5 -1.1
 10     20      30      30.0 20.0 10.0
 1      1       1       1.0 1.0 1.0
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

    if (a > b && a > c) {
        if (b > c) {
            printf("%.1f %.1f %.1f\n", a, b, c);
        } else {
            printf("%.1f %.1f %.1f\n", a, c, b);
        }
    } else if (b > a && b > c) {
        if (a > c) {
            printf("%.1f %.1f %.1f\n", b, a, c);
        } else {
            printf("%.1f %.1f %.1f\n", b, c, a);
        }
    } else if (c > a) {
        if (a > b) {
            printf("%.1f %.1f %.1f\n", c, a, b);
        } else {
            printf("%.1f %.1f %.1f\n", c, b, a);
        }
    } else {
        printf("%.1f %.1f %.1f\n", a, b, c);
    }

    return 0;
}

