/*
    Raise base to power m
*/

#include <stdio.h>
int power(int base, int m);

main()
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

int power(int base, int m)
{
    int i, p;

    p = 1;
    for(i = 1; i <= m; i++)
    {
        p = p * base;
    }

    return p;
}
