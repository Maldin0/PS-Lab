//
// Created by Doomf on 8/23/2023.
//
#include "stdio.h"
#include "math.h"

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("sqrt(%d^2+%d^2)=%.2lf", x, y, sqrt(pow(x, 2) + pow(y, 2)));
}