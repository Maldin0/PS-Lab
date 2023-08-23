//
// Created by Doomf on 8/23/2023.
//
#include "stdio.h"
#include "math.h"

double perimeter(double a, double b, double c) {return a+b+c;}
double area(double a, double b) {return 0.5*a*b;}

int main() {
    double a, b, c;
    scanf("%lf\n%lf", &a, &b);
    c = sqrt(a*a+b*b);
    printf("Perimeter: %.2f\n"
           "Area: %.2f", perimeter(a, b, c), area(a, b));
    return 0;
}