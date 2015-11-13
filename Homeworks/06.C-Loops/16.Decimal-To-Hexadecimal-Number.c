/*
 * Using loops write a program that converts an integer number to its
 * hexadecimal representation. The input is entered as long. The output should
 * be a variable of type string. Examples:
decimal         hexadecimal
254             FE
6883            1AE3
338583669684    4ED528CBB4
 */

#include <stdio.h>
#include <string.h>

#define BUFFER_SiZE 17

char get_digit(int);

int main() {
    printf("Please enter an integer number to convert to Hex: ");
    long long n;
    scanf("%lld", &n);

    char hex[BUFFER_SiZE];
    int i = 0;
    while (n > 0) {
        char currentDigit = get_digit(n % 16);
        hex[i] = currentDigit;
        n /= 16;
        i++;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }

    printf("\n");
    return 0;
}

char get_digit(int digit) {
    switch (digit) {
        case 0: return '0';
        case 1: return '1';
        case 2: return '2';
        case 3: return '3';
        case 4: return '4';
        case 5: return '5';
        case 6: return '6';
        case 7: return '7';
        case 8: return '8';
        case 9: return '9';
        case 10: return 'A';
        case 11: return 'B';
        case 12: return 'C';
        case 13: return 'D';
        case 14: return 'E';
        case 15: return 'F';
    }
}

