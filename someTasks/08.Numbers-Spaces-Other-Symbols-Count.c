/*
    Count numbers, spaces and other symbols
*/

#include <stdio.h>

main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = 0;
    nother = 0;
    for(i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
    }

    while((c = getchar()) != EOF)
    {
        if(c > '0' && c < '9')
        {
            ++ndigit[c - '0'];
        }
        else if(c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d -> %d\n", i, ndigit[i]);
    }

    printf("White Spaces -> %d \nOther Characters-> %d\n", nwhite, nother);
}
