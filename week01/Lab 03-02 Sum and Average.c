//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>

int sum_avg() {
    float f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    scanf("%f\n%f\n%f\n%f", &f1, &f2, &f3, &f4);
    printf("Summation is %.2f\n", f1+f2+f3+f4);
    printf("Average is %.3f", (f1+f2+f3+f4)/4);
    return 0;
}
int main() {
    sum_avg();
}