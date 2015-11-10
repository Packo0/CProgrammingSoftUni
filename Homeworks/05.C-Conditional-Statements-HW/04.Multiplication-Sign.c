/*
 * Write a program that shows the sign (+, - or 0) of the product of three
 * real numbers, without calculating it. Use a sequence of if operators. Examples:
 a       b       c       result
 5       2       2       +
-2      -2       1       +
-2       4       3       -
 0      -2.5     4       0
-1      -0.5    -5.1     -
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

    int isPositiveSign = (a > 0 && b > 0 && c > 0) ||
            (a > 0 && b < 0 && c < 0) ||
            (a < 0 && b > 0 && c < 0) ||
            (a < 0 && b < 0 && c > 0);

    if (isPositiveSign) {
        printf("+\n");
    } else if (a == 0 || b == 0 || c == 0) {
        printf("0\n");
    } else {
        printf("-\n");
    }
    return 0;
}

