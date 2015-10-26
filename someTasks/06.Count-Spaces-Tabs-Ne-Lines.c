/*
    Counts input spaces tabs and new lines
*/

#include <stdio.h>

main()
{
    int c, spaces, tabs, newLines;

    spaces = 0;
    tabs = 0;
    newLines = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            ++spaces;
        }
        else if(c == '\t')
        {
            ++tabs;
        }
        else if(c == '\n')
        {
            ++newLines;
        }
    }

    printf("Spaces -> %d\n", spaces);
    printf("Tabs -> %d\n", tabs);
    printf("New Lines -> %d\n", newLines);
}
