/*
 * Using loops write a program that converts an integer number to its binary
 * representation. The input is entered as long. The output should
 * be a variable of type string. Examples:
decimal     binary
0           0
3           11
43691       1010101010101011
236476736   1110000110000101100101000000
 */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Please enter an integer number to convert to binary: ");
    long long n;
    scanf("%lld", &n);

    int binary[65];
    int i = 0;
    while (n > 0) {
        int currentDigit = n % 2;
        binary[i] = currentDigit;
        n /= 2;
        i++;
    }
    
    if(n == 0){
        printf("0");
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");
    return 0;
}
