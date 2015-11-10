/*
 * Write an if-statement that takes two variables a and b and exchanges
 * their values if the first one is greater than the second one.
 * As a result print the values a and b, separated by a space. Examples:
a       b       result
5       2       2.0 5.0
3       4       3.0 4.0
5.5     4.5     4.5 5.5
 */

#include <stdio.h>

int main() {
    double firstNum, secondNum;
    printf("Please enter first number: ");
    scanf("%lf", &firstNum);
    printf("Please enter second number: ");
    scanf("%lf", &secondNum);
    
    if(firstNum > secondNum){
        double oldValue = firstNum;
        firstNum = secondNum;
        secondNum = oldValue;
    }
    
    printf("%.1f %.1f\n", firstNum, secondNum);
    return 0;
}

