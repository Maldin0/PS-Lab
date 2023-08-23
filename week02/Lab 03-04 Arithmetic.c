//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>
#include <math.h>

int arith() {
    double d1, d2;
    scanf("%lf,%lf", &d1, &d2);
    printf("The sum of the given numbers : %lf\n", d1+d2);
    printf("The difference of the given numbers : %lf\n", d1-d2);
    printf("The product of the given numbers : %lf\n", d1*d2);
    printf("The quotient of the given numbers : %lf\n", d1/d2);
    return 0;
}

int main() {
    arith();
}