//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"

int cross() {
    int size;
    scanf("%d", &size);

    for (int rows = 1; rows <= size; rows++){
        for (int cols = 1; cols <= size; cols++) {
            if (rows == cols || rows + cols == size+1) {
                printf("-");
            } else printf("#");
        }
        printf("\n");
    }
    return 0;
}

int main() {
    cross();
    return 0;
}