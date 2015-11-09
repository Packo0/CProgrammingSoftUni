/*
 * Write an expression that checks for given point (x, y) if it is within the circle
 * K({1, 1}, 1.5) and out of the rectangle R(top=1, left=-1, width=6, height=2).
 * Print yes or no:
 x      y       inside K & outside of R
 1      2       yes
 2.5    2       no
 0      1       no
 2.5    1       no
 2      0       no
 4      0       no
 2.5    1.5     no
 2      1.5     yes
 1      2.5     yes
-100   -100     no
 */

#include <stdio.h>

int main() {
    double pointX, pointY;
    printf("Please enter X coordinate: ");
    scanf("%lf", &pointX);
    printf("Please enter Y coordinate: ");
    scanf("%lf", &pointY);

    double centerX = 1,
            centerY = 1,
            radius = 1.5;
    int isInCircle = ((pointX - centerX) * (pointX - centerX) +
            (pointY - centerY) * (pointY - centerY)) <= radius * radius;

    double top = 1,
            left = -1,
            width = 6,
            height = 2,
            bottomRightX = left + width,
            bottomRightY = top - height;
    int isInRect = ((pointX >= left) && (pointX <= bottomRightX))
            && ((pointY <= top) && (pointY >= bottomRightY));

    int isInCircleAndOutRect = isInCircle && !isInRect;

    if (isInCircleAndOutRect) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }


    return 0;
}

