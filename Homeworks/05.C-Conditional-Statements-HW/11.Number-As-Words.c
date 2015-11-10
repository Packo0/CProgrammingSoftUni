/*
 * Write a program that converts a number in the range [0…999] to words,
 * corresponding to the English pronunciation. Examples:
numbers         number as words
0               Zero
9               Nine
10              Ten
12              Twelve
19              Nineteen
25              Twenty five
98              Ninety eight
273             Two hundred and seventy three
400             Four hundred
501             Five hundred and one
617             Six hundred and seventeen
711             Seven hundred and eleven
999             Nine hundred and ninety nine
 */

#include <stdio.h>

const char *from0To9[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const char *from10to19[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
const char *from20to90[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int main() {
    int num;
    printf("Please enter an integer [0..999]: ");
    scanf("%d", &num);

    int n = num;
    int isThreeDigitNumber = n / 100 > 0;
    if (isThreeDigitNumber) {
        printf("%s hundred ", from0To9[n / 100]);
    }

    if (n / 100 != 0 && n % 100) {
        printf("and ");
    }

    n %= 100;
    if (n / 10 > 1 && ((n % 10 == 0) || (n % 10 != 0))) {
        printf("%s ", from20to90[n / 10 - 2]);

        if (n / 10 > 1 && (n % 10 != 0)) {
            printf("%s ", from0To9[n % 10]);
        }
    }

    if (n < 20 && n > 9) {
        printf("%s ", from10to19[n - 10]);
    }

    if (num < 10) {
        printf("%s ", from0To9[n]);
    }
    return 0;
}
