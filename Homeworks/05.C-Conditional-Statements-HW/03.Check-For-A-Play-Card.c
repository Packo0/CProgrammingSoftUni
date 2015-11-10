/*
 * Classical play cards use the following signs to designate the card face:
 * 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K and A. Write a program that enters a string
 * and prints “yes” if it is a valid card sign or “no” otherwise. Examples:
character       Valid card sign?
5               yes
1               no
Q               yes
q               no
P               no
10              yes
500             no
 */

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 3

int main() {
    char card[BUFFER_SIZE];
    printf("Please enter score card: ");
    fgets(card, BUFFER_SIZE, stdin);

    int length = strlen(card);

    if (card[0] > 1 && length == 1) {
        switch (card[0]) {
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case 'J':
            case 'Q':
            case 'K':
            case 'A':
                printf("Yes\n");
                break;
            default:
                printf("No\n");
                break;
        }
    } else if (card[0] == '1' && card[1] == '0') {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}

