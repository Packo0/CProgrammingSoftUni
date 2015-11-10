/*
 * Write a program that, depending on the user’s choice, inputs an int, 
 * double or string variable. If the variable is int or double, the program
 * increases it by one. If the variable is a string, the program appends "*" at
 * the end. Print the result at the console. Use switch statement. Example:
program                 user        result                          output
Please choose a type:   3
1 --> int                           Please enter a string: hello    hello*
2 --> double
3 --> string

Please choose a type:   2           Please enter a double: 1.5      2.5
1 --> int
2 --> double
3 --> string
 */

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

int main() {
    int choice;
    printf("Please choose a type:\n");
    printf("1 --> int\n");
    printf("2 --> double\n");
    printf("3 --> string\n");

    scanf("%d", &choice);
    if (choice == 1) {
        int intNum;
        printf("Please enter an integer: ");
        scanf("%d", &intNum);
        printf("%d", intNum + 1);
    } else if (choice == 2) {
        double doubleNum;
        printf("Please enter an integer: ");
        scanf("%lf", &doubleNum);
        printf("%.1f", doubleNum + 1);
    } else if (choice == 3) {
        char str[BUFFER_SIZE];
        printf("Please enter a  string: ");
        fgets(str, BUFFER_SIZE, stdin);
        if (str[0] == '\n') {
            fgets(str, BUFFER_SIZE, stdin);
        }

        int length = strlen(str) - 1;
        if (str[length] == '\n') {
            str[length] = '\0';
        }
      
        printf("%s*", str);
    }
    return 0;
}

