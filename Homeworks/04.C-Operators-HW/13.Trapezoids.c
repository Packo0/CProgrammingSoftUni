/*
 * Write an expression that calculates trapezoid's area by given sides a and b and height h.
 * Examples:
a       b       h       area
5       7       12      72.00
2       1       33      49.50
8.5     4.3     2.7     17.28
100     200     300     45000.00
0.222   0.333   0.555   0.15
 */

#include <stdio.h>

int main() {
    double a, b, h, area = 0;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("h = ");
    scanf("%lf", &h);
    
    area = ((a + b) * h) / 2;
    
    printf("area = %.2f", area);
    return 0;
}

