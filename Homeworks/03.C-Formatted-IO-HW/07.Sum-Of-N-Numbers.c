/*
 *  Write a program that enters a number n and after that enters more n numbers
 *  and calculates and prints their sum. Examples:

numbers sum    numbers sum        numbers   sum
3       90.0   5       6.5        1         1.0
20             2                  1
60            -1        
10            -0.5      
               4
               2
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    
    int i;
    double sum = 0, currentNum;
    for(i = 1; i <= n; i++){
        printf("Please enter number %d: ", i);
        scanf("%lf", &currentNum);
        sum += currentNum;
    }
    
    printf("Sum = %.1f", sum);
    
    return 0;
}


