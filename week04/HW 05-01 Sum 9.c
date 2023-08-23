//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"
#include "stdbool.h"

int sum() {
    int res = 0, temp;
    while (true) {
        scanf("%d", &temp);
        if (temp == -9) {
            break;
        } else res += temp;
    }
    printf("%d", res);

    return 0;
}
int main() {
    sum();
    return 0;
}