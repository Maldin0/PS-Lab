//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>

int per() {
    double d1, d2;
    scanf("%lf\n%lf", &d1, &d2);
    printf("Perimeter of rectangle = %.4lf units", 2*d1+2*d2);
    return 0;
}

int main() {
    per();
    return 0;
}