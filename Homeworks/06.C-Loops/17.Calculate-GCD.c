/*
 * Write a program that calculates the greatest common divisor (GCD) of given
 * two integers a and b. Use the Euclidean algorithm. Examples:
a   b   GCD(a, b)
3   2   1
60  40  20
5  -15  5
 */

#include <stdio.h>

int gcd(int, int);

int main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    if (b > a) {
        int oldValue = a;
        a = b;
        b = oldValue;
    }

    int result = gcd(a, b);

    printf("gcd(%d, %d) = %d", a, b, result);
    return 0;
}

int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

