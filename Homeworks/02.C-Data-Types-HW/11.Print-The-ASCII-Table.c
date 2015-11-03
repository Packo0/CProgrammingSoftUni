/*
 * write a program to prints the entire ASCII table of characters at the console
 * (characters from 0 to 255) .
 */

#include <stdio.h>

int main() {
    int i;
    printf("ASCII Table:\nNumber  |\tSymbol\n");
    for(i = 0; i <= 255; i++){
        printf("%d\t\t|%c\n", i, i);
    }
    return 0;
}


