//
// Created by Doomf on 7/26/2023.
//
#include "stdio.h"

char* score() {
    float point;
    scanf("%f", &point);
    if (point <= 100 && point >= 80) return "A";
    else if (point >= 70 && point < 80) return "B";
    else if (point >= 60 && point < 70) return "C";
    else if (point >= 50 && point < 60) return "D";
    else if (point >= 0 && point < 50) return "F";
    return "Out of Range";
}

int main() {
    printf("%s", score());
    return 0;
}