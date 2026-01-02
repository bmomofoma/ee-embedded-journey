/*
 * File: circle_calculator.c
 * Description: Calculates the area, surface area, and volume of a sphere
 *              based on a user-provided radius using math functions.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    const double PI = 3.1429;
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.00;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea= 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);

    
    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);
}