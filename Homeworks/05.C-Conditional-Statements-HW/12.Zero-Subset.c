/*
 * We are given 5 integer numbers. Write a program that finds all subsets of
 * these numbers whose sum is 0. Assume that repeating the same subset several
 * times is not a problem. Examples:
numbers             result
3 -2 1 1 8          -2 + 1 + 1 = 0
 * 
3 1 -7 35 22        no zero subset
 * 
1 3 -4 -2 -1        1 + -1 = 0
                    1 + 3 + -4 = 0
                    3 + -2 + -1 = 0
 * 
1 1 1 -1 -1         1 + -1 = 0
                    1 + 1 + -1 + -1 = 0
                    1 + -1 + 1 + -1 = 0
…
0 0 0 0 0           0 + 0 + 0 + 0 + 0 = 0
Hint: you may check for zero each of the 32 subsets with 32 if statements.
 */

#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("d = ");
    scanf("%d", &d);
    printf("e = ");
    scanf("%d", &e);
    
    int isZeroSubset = 0;

    // one number subset -> check sum = 0
    if (a == 0) {
        isZeroSubset = 1;
        printf("%d\n", a);
    }

    if (b == 0) {
        isZeroSubset = 1;
        printf("%d\n", b);
    }

    if (c == 0) {
        isZeroSubset = 1;
        printf("%d\n", c);
    }

    if (d == 0) {
        isZeroSubset = 1;
        printf("%d\n", d);
    }

    if (e == 0) {
        isZeroSubset = 1;
        printf("%d\n", e);
    }

    // two numbers subsets -> check to sum = 0
    if (a + b == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", a, b, a + b);
    }

    if (a + c == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", a, c, a + c);
    }

    if (a + d == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", a, d, a + d);
    }

    if (a + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", a, e, a + e);
    }

    if (b + c == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", b, c, b + c);
    }

    if (b + d == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", b, d, b + d);
    }

    if (b + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", b, e, b + e);
    }

    if (c + d == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", c, d, c + d);
    }

    if (c + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", c, e, c + e);
    }

    if (d + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d = %d\n", d, e, d + e);
    }

    // three numbers subsets -> check to sum = 0
    if (a + b + c == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
    }

    if (a + b + d == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", a, b, d, a + b + d);
    }

    if (a + b + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", a, b, e, a + b + e);
    }

    if (a + c + d == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", a, c, d, a + c + d);
    }

    if (a + c + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", a, c, e, a + c + e);
    }

    if (a + d + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", a, d, e, a + d + e);
    }

    if (b + c + d == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", b, c, d, b + c + d);
    }

    if (b + c + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", b, c, e, b + c + e);
    }

    if (b + d + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", b, d, e, b + d + e);
    }

    if (c + d + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d = %d\n", c, d, e, c + d + e);
    }

    // four numbers subsets -> check to sum = 0
    if (a + b + c + d == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d + %d = %d\n", a, b, c, d, a + b + c + d);
    }

    if (a + b + c + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d + %d = %d\n", a, b, c, e, a + b + c + e);
    }

    if (a + b + d + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d + %d = %d\n", a, b, d, e, a + b + d + e);
    }

    if (b + c + d + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d + %d = %d\n", b, c, d, e, b + c + d + e);
    }

    if (c + a + d + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d + %d = %d\n", c, a, d, e, c + a + d + e);
    }

    // five numbers subsets -> check to sum = 0
    if (a + b + c + d + e == 0) {
        isZeroSubset = 1;
        printf("%d + %d + %d + %d + %d = %d\n", a, b, c, d, e, a + b + c + d + e);
    }
    
    if(!isZeroSubset){
        printf("no zero subset\n");
    }
    return 0;
}
