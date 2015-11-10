/*
 * Write a program that asks for a digit (0-9), and depending on the input,
 * shows the digit as a word (in English). Print “not a digit” in case of invalid input.
 * Use a switch statement. Examples:
 d      result
 2      two
 1      one
 0      zero
 5      five
-0.1    not a digit
 hi     not a digit
 9      nine
 10 not a digit
 */

#include <stdio.h>

int main() {
    char ch = getchar();

    switch (ch) {
        case '0':
            printf("Zero\n");
            break;
        case '1':
            printf("One\n");
            break;
        case '2':
            printf("Two\n");
            break;
        case '3':
            printf("Three\n");
            break;
        case '4':
            printf("Four\n");
            break;
        case '5':
            printf("Five\n");
            break;
        case '6':
            printf("Six\n");
            break;
        case '7':
            printf("Seven\n");
            break;
        case '8':
            printf("Eight\n");
            break;
        case '9':
            printf("Nine\n");
            break;
        default:
            printf("Not a digit\n");
            break;
    }

    return 0;
}

