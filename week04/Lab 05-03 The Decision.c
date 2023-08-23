//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"

int dec() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (m > n) {
        for (m; m >= n; m--) {
            printf("%d ", m);
        }
    } else {
        for (m;m <= n; m++) {
            printf("%d ", m);
        }
    }
    return 0;
}
int main() {
    dec();
    return 0;
}
