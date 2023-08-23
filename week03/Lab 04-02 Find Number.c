//
// Created by Doomf on 7/26/2023.
//
#include "stdio.h"

int find()
{
    double num1, num2, num3, mid, min;
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 > num2)
    {
        mid = num1;
        min = num2;
    } else
    {
        mid = num2;
        min = num1;
    }
    if (mid > num3) {
        if (min > num3)
        {
            mid = min;
        } else mid = num3;
    }

    printf("%.2lf", mid);
    return 0;
}

int main() {
    find();
    return 0;
}