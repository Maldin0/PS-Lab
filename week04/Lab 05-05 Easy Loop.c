//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"
int loop() {
    int num, increment;
    scanf("%d", &num);

    if (num > 0) {
        increment = -1;
    } else increment = 1;

    while (num != 0) {
        printf("%d ", num);
        num += increment;
    }

    printf("0");
    return 0;
}

int main() {
    loop();
    return 0;
}