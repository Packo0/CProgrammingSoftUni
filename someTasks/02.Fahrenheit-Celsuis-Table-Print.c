/*
    print Fahrenheit and Celsius table
*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    /*
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit - Celsius table\n");
    printf("Fahrenheit\tCelsius\n");

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    */

    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    //print table from 300 to 0
    printf("----------------\n");
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
