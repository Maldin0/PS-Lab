//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"

int reg() {
    int age, cond1 = 0, cond2 = 0, cond3 = 0, cond4 = 0, sum_age = 0, counters = 1;
    float height, weight, avg_age, avg_height, avg_weight, sum_height=0, sum_weight=0;

    while (counters <= 50) {
        scanf("%d %f %f", &age, &height, &weight);
        if (age >= 20 && height >= 160) cond1++;
        if (age < 20 && (height <= 180 || weight >= 60)) cond2++;
        if (age >= 30 && (weight >= 40 && weight <= 80)) cond3++;
        if (age < 40 && (weight < 85|| height <= 200)) cond4++;
        sum_age += age;
        sum_height += height;
        sum_weight += weight;
        counters++;
    }

    avg_age = sum_age/50;
    avg_height = sum_height/50;
    avg_weight = sum_weight/50;

    printf("Age >= 20 and Height >= 160: %d\n"
           "Age < 20 and Height <= 180 or Weight >= 60: %d\n"
           "Age >= 30 and Weight >= 40 and Weight <= 80: %d\n"
           "Age < 40 and Weight < 85 or Height <= 200: %d\n"
           "Average Age: %.0f\n"
           "Average Height: %.2f\n"
           "Average Weight: %.2f", cond1, cond2, cond3, cond4, avg_age, avg_height, avg_weight);
    return 0;
}
int main() {
    reg();
    return 0;
}