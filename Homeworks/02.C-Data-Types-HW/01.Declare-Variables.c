/*
 * Declare five variables choosing for each of them the most appropriate
 * of the types char, short, unsigned short, int, unsigned int, long,
 * unsigned long to represent the following values: 
 * 52130, 8942492113, -115, 4825932, 97, -10000, -35982859328592389.
 * Choose a large enough type for each number to ensure it will fit in it.
 */
#include <stdio.h>

int main() {
    unsigned short positiveShort = 52130;
    unsigned long positiveLong = 8942492113;
    char someChar = -115;
    int someInt = 4825932;
    unsigned char positiveChar = 97;
    short negativeShort = -10000;
    long negativeLong = -35982859328592389;

    printf("%d\n", positiveShort);
    printf("%ld\n", positiveLong);
    printf("%d\n", someChar);
    printf("%d\n", someInt);
    printf("%d\n", positiveChar);
    printf("%d\n", negativeShort);
    printf("%ld\n", negativeLong);
    return 0;
}


