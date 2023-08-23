//
// Created by Doomf on 7/29/2023.
//
#include "stdio.h"
#include "math.h"

int sales()
{
    double price, discount;
    int amount;
    scanf("%lf\n%lf\n%d", &price, &discount, &amount);
    double discountedPrice = price*amount*(100-discount)/100;
    int paid = floor(amount/3) * 2;
    double totalCost = paid * price;
    int free = floor(paid/2);
    int remain = amount - paid-free;
    totalCost += remain*price;
    if (discountedPrice <= totalCost)
    {
        printf("Discount %0.f\%\n%.2f", discount, discountedPrice);
    } else
    {
        printf("Buy 2 Get 1\n%.2f", totalCost);
    }
    return 0;
}

int main() {
    sales();
    return 0;
}