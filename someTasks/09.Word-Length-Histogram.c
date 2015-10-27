/*
    Prints a histogram of the length of words in the input
*/
#include <stdio.h>

main()
{
    int c, wordLength, i, row, col, currentWord, maxWordLength;
    int words[80];

    maxWordLength = 0;
    wordLength = 0;
    for(i = 0; i < 80; i++)
    {
        words[i] = 0;
    }

    currentWord = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(maxWordLength < wordLength)
            {
                maxWordLength = wordLength;
            }

            words[currentWord] = wordLength;
            wordLength = 0;
            ++currentWord;
        }
        else
        {
            ++wordLength;
        }
    }

    //Print Horizontal Histogram
    printf("********************\nHorizontal Histogram\n********************\n");
    for(row = 0; row < currentWord; row++)
    {
        for(col = 0; col < words[row]; col++)
        {
            printf("|");
        }

        printf("\n");
    }

    //Print Vertical Histogram
    printf("******************\nVertical Histogram\n******************\n");
    for(row = 0; row < maxWordLength; row++)
    {
        for(col = 0; col < currentWord; col++)
        {
            if(row < maxWordLength-words[col])
            {
                printf(" ");
            }
            else
            {
                printf("|");
            }
        }

        printf("\n");
    }
}
