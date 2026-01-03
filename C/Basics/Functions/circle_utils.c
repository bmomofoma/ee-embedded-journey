#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

double area(double r);
double circumference(double r);

int main(void) {
    double radius = 0.0;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    printf("Area: %.2lf\n", area(radius));
    printf("Circumference: %.2lf\n", circumference(radius));

    return 0;
}

double area(double r){
    return PI * pow(r, 2);
}

double circumference(double r){
    return 2 * PI * r;
}
