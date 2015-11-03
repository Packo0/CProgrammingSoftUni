/*
 *  Declare two integer variables a and b and assign them with 5 and 10 
 *  and after that exchange their values by using some programming logic. 
 *  Print the variable values before and after the exchange.
    Expected Output
    Before:         After:
    a = 5           a = 10
    b = 10          b = 5    
 */
#include <stdio.h>

int main() {
    int a = 5, b = 10, tmp;

    printf("Before exchange a = %d, b = %d\n", a, b);
    tmp = b;
    b = a;
    a = tmp;
    printf("Before exchange a = %d, b = %d\n", a, b);
    return 0;
}
