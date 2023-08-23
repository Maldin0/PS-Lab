//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>
#include <math.h>
int bmi() {
    float height, weight;
    scanf("%f\n%f", &height, &weight);
    printf("%f", weight/((height/100)*(height/100)));
    return 0;
}

int main() {
    bmi();
    return 0;
}