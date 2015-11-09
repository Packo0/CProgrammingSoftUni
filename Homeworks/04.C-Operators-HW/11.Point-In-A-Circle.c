/*
 * Write an expression that checks if given point (x, y) is
 * inside a circle K({0, 0}, 2). Examples:
 x       y       inside
 0       1       Yes
-2       0       Yes
-1       2       No
 1.5    -1       Yes
-1.5    -1.5     No
 100    -30      No
 0       0       Yes
 0.2    -0.8     Yes
 0.9    -1.93    No
 1       1.655   Yes
 */

#include <stdio.h>

int main() {
    double pointX, pointY;
    printf("Please enter X coordinate: ");
    scanf("%lf", &pointX);
    printf("Please enter Y coordinate: ");
    scanf("%lf", &pointY);

    double centerX = 0,
            centerY = 0,
            radius = 2;
    int isInCircle = ((pointX - centerX) * (pointX - centerX) +
            (pointY - centerY) * (pointY - centerY)) <= radius * radius;

    printf("Is point (%f,%f) in circle? -> %s\n", pointX, pointY, isInCircle ? "Yes" : "No");
    return 0;
}

