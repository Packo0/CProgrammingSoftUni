/*
 * Write a program that generates and prints all possible cards from a 
 * standard deck of 52 cards (without the jokers). The cards should be printed
 * using the classical notation (like 5S (♠), AH (♥), 9C (♣) and KD (♦)).
 * The card faces should start from 2 to A. Print each card face in its four
 * possible suits: clubs, diamonds, hearts and spades. Use 2 nested for-loops
 * and a switch-case statement.
output
2C 2D 2H 2S
3C 3D 3H 3S
…
KC KD KH KS
AC AD AH AS
 */

#include <stdio.h>

const char suits[] = {'C', 'D', 'H', 'S'};
const char cards[] = {'J', 'Q', 'K', 'A'};

int main() {
    int i, j, cardFacesNumber = 52 / 4 + 2;

    for (i = 2; i < cardFacesNumber; i++) {
        for (j = 0; j < 4; j++) {
            if (i <= 10) {
                printf("%3d%c ", i, suits[j]);
            } else {
                switch (j) {
                    case 0: printf("%3c%c ", cards[i - 11], suits[j]);
                        break;
                    case 1: printf("%3c%c ", cards[i - 11], suits[j]);
                        break;
                    case 2: printf("%3c%c ", cards[i - 11], suits[j]);
                        break;
                    case 3: printf("%3c%c ", cards[i - 11], suits[j]);
                        break;
                }
            }
        }

        printf("\n");
    }
    return 0;
}

