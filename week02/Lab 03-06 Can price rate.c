//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>
#include <math.h>
int vol() {
    double price, diameter, height;
    scanf("%lf\n%lf\n%lf", &price, &diameter, &height);
    double volume = height*3.14159265359*pow(diameter/2, 2);
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", price/volume);
    return 0;
}

int main() {
    vol();
    return 0;
}