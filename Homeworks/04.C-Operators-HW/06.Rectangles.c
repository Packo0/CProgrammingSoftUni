/*
 * Write an expression that calculates rectangle’s perimeter and area by
 * given width and height. Examples:
width       height      perimeter       area
3           4           14              12.0
2.5         3           11              7.5
5           5           20              25.0
 */

#include <stdio.h>

int main() {
    double width, height;
    printf("PLease enter rectangle`s width: ");
    scanf("%lf", &width);
    printf("PLease enter rectangle`s height: ");
    scanf("%lf", &height);

    double area = width * height;
    double perimeter = 2 * (width + height);

    printf("Perimeter = %.0f\n", perimeter);
    printf("Area = %.1f\n", area);
    return 0;
}
