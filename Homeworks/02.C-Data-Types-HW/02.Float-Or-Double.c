/*
 * Which of the following values can be assigned to a variable of type float 
 * and which to a variable of type double:
 * 34.567839023, 12.345, 8923.1234857, 3456.091?
 * Write a program to assign the numbers in variables and print them to ensure
 * no precision is lost.
 */
#include <stdio.h>

int main() {
    double doubleOne = 34.567839023;
    float floatOne = 12.345;
    double doubleTwo = 8923.1234857;
    float floatTwo = 3456.091;

    printf("%.9f\n", doubleOne);
    printf("%.3f\n", floatOne);
    printf("%.7f\n", doubleTwo);
    printf("%.3f\n", floatTwo);
    return 0;
}


