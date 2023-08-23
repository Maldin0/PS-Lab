//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"

int pyramid() {
    int height, width;
    scanf("%d", &height);
    width = height*2-1;
    for (int rows = 1; rows <= height; rows++) {
        for (int cols = 1; cols <= width; cols++){
            if ((cols + rows >= height + 1) && cols <= height) {
                printf("*");
            } else if ((cols - rows <= height - 1) && cols > height) {
                printf("*");
            } else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int main() {
    pyramid();
    return 0;
}