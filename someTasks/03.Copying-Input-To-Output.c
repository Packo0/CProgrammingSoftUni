/*
    Copying input stream to output stream
*/

#include <stdio.h>
main()
{
    int c;

    while((c = getchar()) != EOF)
    {
        putchar(c);
    }
}
