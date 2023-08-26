//
// Created by Doomf on 8/26/2023.
//
#include "stdio.h"
#include "math.h"

int main() {
    int fib;
    scanf("%d", &fib);
    fib++;
    printf("method = %.0lf", (pow(1+ sqrt(5), fib) - pow(1- sqrt(5), fib)) / (sqrt(5) * pow(2, fib)));
    return 0;
}