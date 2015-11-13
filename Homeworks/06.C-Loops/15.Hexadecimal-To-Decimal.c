/*
 * Using loops write a program that converts a hexadecimal integer number
 * to its decimal form. The input is entered as string. The output should
 * be a variable of type long. Examples:
hexadecimal     decimal
FE              254
1AE3            6883
4ED528CBB4      338583669684
 */

#include <stdio.h>
#include <string.h>

#define BUFFER_SiZE 17

int get_digit(int);
long power(int, int);

int main() {
    printf("Please enter a number in hex to convert to decimal: ");
    char line[BUFFER_SiZE];
    fgets(line, BUFFER_SiZE, stdin);

    size_t length = strlen(line);
    if (line[length - 1] == '\n') {
        line[length - 1] = '\0';
    }

    length = strlen(line);

    int i;
    long long sum = 0;
    for (i = length - 1; i >= 0; i--) {
        int coeff = get_digit(line[i]);
        sum += coeff * power(16, length - i - 1);
    }

    printf("%lld\n", sum);
    return 0;
}

long power(int x, int y) {
    int i;
    long result = 1;
    for (i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int get_digit(int digit) {
    switch (digit) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
    }
}

