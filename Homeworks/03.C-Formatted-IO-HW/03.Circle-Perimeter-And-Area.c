/*
 *  Write a program that reads the radius r of a circle and prints its
 *  perimeter and area formatted with 2 digits after the decimal point. Examples:
        r       perimeter       area
        2       12.57           12.57
        3.5     21.99           38.48
 */

#include <stdio.h>

#define PI 3.14

int main() {
    double radius, area, perimeter;

    printf("Please enter the radius of a circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Area of the circle with radius %.2f is: %.2f\n", radius, area);
    printf("Perimeter of the circle with radius %.2f is: %.2f\n", radius, perimeter);
    return 0;
}


