/*
 *  Write a program that reads 3 numbers: an integer a (0 ≤ a ≤ 500),
 *  a floating-point b and a floating-point c and prints them in 4 virtual
 *  columns on the console. Each column should have a width of 10 characters.
 *  The number a should be printed in hexadecimal, left aligned;
 *  then the number a should be printed in binary form, padded with zeroes, 
 *  then the number b should be printed with 2 digits after the decimal point,
 *  right aligned; the number c should be printed with 3 digits after
 *  the decimal point, left aligned. Examples:
    a       b           c          result
    254     11.6        0.5        |FE        |0011111110|      11.6|0.500      |
    499     -0.5559     10000      |1F3       |0111110011|     -0.56|10000.000  |
    0       3           -0.1234    |0         |0000000000|         3|-0.123     |
 */

#include <stdio.h>

#define FORMAT "|%-10X|%s|%10.2f|%-10.3f|\n"

int main() {
    int a;
    double b, c;

    printf("Enter an integer a = ");
    scanf("%d", &a);
    if (a > 500 || a < 0) {
        printf("The %d must be between 0 <= a <= 500", a);
        return 1;
    }

    printf("Enter double b = ");
    scanf("%lf", &b);
    printf("Enter double c = ");
    scanf("%lf", &c);

    int num = a, i = 9;
    char numAsString[] = "0000000000";
    while (num > 0) {
        int bit = num % 2;
        numAsString[i] = bit ? '1' : '0';
        num /= 2;
        i--;
    }

    printf(FORMAT, a, numAsString, b, c);
    return 0;
}


