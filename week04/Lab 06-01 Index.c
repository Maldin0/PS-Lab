//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"

int inde() {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int num = 0;
    while (1) {
        scanf("%d", &num);
        if (num >= 1 && num <= 20) break;
    }
    for (int i = 0; i < sizeof(M) / sizeof(M[0]); i++) {
        if (num == M[i]) {
            printf("%d is in M at index [%d]", num, i);
            return 0;
        }
    }

    for (int j = 0; j < sizeof(N) / sizeof(N[0]); j++) {
        if (num == N[j]) {
            printf("%d is in N at index [%d]", num, j);
            return 1;
        }
    }

    printf("%d is not in neither M nor N", num);
    return 2;
}

int main() {
    inde();
    return 0;
}