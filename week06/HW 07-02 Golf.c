//
// Created by Doomf on 8/26/2023.
//
#include "stdio.h"
#include "math.h"

int main() {
    int u, theta;
    scanf("%d\n%d", &theta,&u );
    double rad = theta*(M_PI/180);
    double h = (pow(u, 2) * pow(sin(rad), 2) / (2 * 9.81));
    printf("theta (degree) : %d\n"
          "u (m/s) : %d\n"
          "h (m) : %.4lf", theta, u, h);
    return 0;
}