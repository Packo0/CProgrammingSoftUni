/*
 * The gravitational field of the Moon is approximately 17% of that on the Earth.
 * Write a program that calculates the weight of a man on the moon by
 * a given weight on the Earth. Examples:
weight          weight on the Moon
86              14.620
74.6            12.682
53.7            9.1290
 */

#include <stdio.h>

int main() {
    float weightOnTheEarth;
    printf("Please enter your weight on the Earth: ");
    scanf("%f", &weightOnTheEarth);

    float weightOnTheMoon = 0.17 * weightOnTheEarth;

    printf("Your weight on the moon is %.3f\n", weightOnTheMoon);
    return 0;
}
