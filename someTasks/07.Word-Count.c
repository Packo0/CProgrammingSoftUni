/*
    Word count
*/

#include <stdio.h>

#define IN 1 //we in word
#define OUT 0 //we are not in word

main()
{
    int c, nw, state;

    state = OUT;
    nw = 0;

    while((c = getchar()) != EOF)
    {
        //++nw;
        if(c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("Word count -> %d\n", nw);
}
