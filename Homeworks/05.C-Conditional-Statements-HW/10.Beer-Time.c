/*
 * A beer time is after 1:00 PM and before 3:00 AM. Write a program that enters a
 * time in format “hh:mm tt” (an hour in range [01...12], a minute in range [00…59]
 * and AM / PM designator) and prints “beer time” or “non-beer time” according to
 * the definition above or “invalid time” if the time cannot be parsed. Examples:
time        result
1:00 PM     beer time
4:30 PM     beer time
10:57 PM    beer time
8:30 AM     non-beer time
02:59 AM    beer time
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 9

int main() {
    int hour, minutes;
    char amPm[3];
    printf("Please enter time in format (hh:mm tt): ");
    if (scanf("%d:%d %2s", &hour, &minutes, amPm) != 3) {
        printf("Invalid time format!\n");
        return 1;
    } else if (1 < hour && hour > 12) {
        printf("Hours must be between 1 and 12!\n");
        return 1;
    } else if (0 < minutes && hour > 59) {
        printf("Minutes must be between 0 and 59!\n");
        return 1;
    }

    int i = 0;
    while (amPm[i]) {
        amPm[i] = tolower(amPm[i]);
        i++;
    }

    amPm[2] = '\0';

    char *pm = "pm";
    char *am = "am";
    if ((strcmp(amPm, am) != 0) && (strcmp(amPm, pm) != 0)) {
        printf("tt must be AM or PM!\n");
        return 1;
    }

    int isBeerTime = (hour >= 1 && minutes >= 0 && amPm[0] == 'p') || (hour < 3 && amPm[0] == 'a');

    if (isBeerTime) {
        printf("beer time\n");
    } else {
        printf("non-beer time\n");
    }

    return 0;
}

