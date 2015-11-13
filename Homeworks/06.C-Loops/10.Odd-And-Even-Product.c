/*
 * You are given n integers (given in a single line, separated by a space).
 * Write a program that checks whether the product of the odd elements is equal
 * to the product of the even elements. Elements are counted from 1 to n, so the
 * first element is odd, the second is even, etc. Examples:
numbers         result                  numbers             result
2 1 1 6 3       yes                     3 10 4 6 5 1        yes
                product = 6                                 product = 60

4 3 2 5 2       no
                odd_product = 16
                even_product = 15
 */

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 64

int main() {
    char readLine[BUFFER_SIZE];
    fgets(readLine, BUFFER_SIZE, stdin);
    int length = strlen(readLine);
    if (readLine[length - 1] == '\n') {
        readLine[length - 1] == '\0';
    }

    int evenProduct = 1, oddProduct = 1, isEven = 0;

    char* numberAsString = strtok(readLine, " ");
    while (numberAsString != NULL) {
        int currentNum = atoi(numberAsString);

        if (isEven) {
            evenProduct *= currentNum;
        } else {
            oddProduct *= currentNum;
        }

        isEven = !isEven;
        numberAsString = strtok(NULL, " ");
    }

    if (evenProduct == oddProduct) {
        printf("Yes\n");
        printf("Product = %d", evenProduct);
    } else {
        printf("No\n");
        printf("odd_product = %d\n", oddProduct);
        printf("even_product = %d\n", evenProduct);

    }
    return 0;
}
