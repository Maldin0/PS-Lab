//
// Created by Doomf on 7/29/2023.
//
#include "stdio.h"
#include "stdbool.h"
bool triangle()
{
    double a, b, c;
    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a) return true;
        }
    }
    return false;
}

int main()
{
    if (triangle())
    {
        printf("Triangle is valid.");
    } else printf("Triangle is not valid.");
}