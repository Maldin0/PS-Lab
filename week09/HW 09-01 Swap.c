//
// Created by Doomf on 9/13/2023.
//
#include "stdio.h"

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double num1, num2, num3;
    scanf(" %lf %lf %lf", &num1, &num2, &num3);

    swap(&num1, &num2);
    swap(&num1, &num3);

    printf("%.2lf %.2lf %.2lf", num1, num2, num3);
}