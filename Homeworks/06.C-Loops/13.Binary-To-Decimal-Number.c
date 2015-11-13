/*
 * Using loops write a program that converts a binary integer number to
 * its decimal form. The input is entered as string. The output should
 * be a variable of type long.. Examples:
binary                              decimal
0                                   0
11                                  3
1010101010101011                    43691
1110000110000101100101000000        236476736
 */

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 65


long power(int, int);

int main() {

    char line[BUFFER_SIZE];
    fgets(line, BUFFER_SIZE, stdin);

    size_t length = strlen(line);
    if (line[length - 1] == '\n') {
        line[length - 1] = '\0';
    }

    length = strlen(line);

    int i;
    long long sum = 0;
    for (i = length - 1; i >= 0; i--) {
        int coeff = line[i] - '0';
        sum += coeff * power(2, length - i - 1);
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
