/*  Write a program that reads your birthday from the console as text and prints
 *  how old you are now and how old you will be after 10 years.
 *  Input       Output
    12.04.1991  Now: 24
                After 10 years: 34
 */
#include <stdio.h>
#include <time.h>
#define SECOND_IN_A_YEAR 31536000

int main() {
    int day, month, year;
    struct tm time_struct;
    time_t time1, time2;

    time1 = time(NULL);
    printf("Enter birth year in format (day.month.year): ");
    scanf("%d.%d.%d", &day, &month, &year);
    
    time_struct.tm_year = year-1900;
    time_struct.tm_mon = month-1;
    time_struct.tm_mday = day;
    time_struct.tm_sec = 0;
    time_struct.tm_min = 0;
    time_struct.tm_hour = 0;
    time_struct.tm_isdst = -1;

    time2 = mktime(&time_struct);
    if (time2 == -1) {
        printf("Error getting time.\n");
        return -1;
    }

    long long diff_sec = difftime(time1,time2);
    int currentYear = diff_sec/SECOND_IN_A_YEAR;
    int afterTenYears = currentYear + 10;
    
    printf("Now: %d\nAfter 10 years: %d", currentYear, afterTenYears);
    return 0;
}
