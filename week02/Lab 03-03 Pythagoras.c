//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>
#include <math.h>

int pythagoras() {
    double a, b;
    scanf("%lf\n%lf", &a, &b);
    printf("%.2lf", sqrt(a*a+b*b));
    return 0;
}

int main() {
    pythagoras();
    return 0;
}