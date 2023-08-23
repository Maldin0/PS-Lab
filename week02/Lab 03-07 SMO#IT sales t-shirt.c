//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>
#include <math.h>

int sales() {
    double price, discount, amount;
    scanf("%lf\n%lf\n%lf", &price, &discount, &amount);
    printf("%.2lf", price*amount*(100-discount)/100);
    return 0;
}

int main() {
    sales();
    return 0;
}