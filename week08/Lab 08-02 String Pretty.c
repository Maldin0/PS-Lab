//
// Created by Doomf on 9/6/2023.
//
#include "stdio.h"
#include "string.h"
#include "math.h"

int main() {
    int size;
    char line1[51];
    char line2[41];
    scanf("%d %[^\n] %[^\n]", &size, line1, line2);
    int line1len = strlen(line1);
    int line2len = strlen(line2);
    line1[line1len] = '\0';
    line2[line2len] = '\0';


    for (int i = 0; i < size; i++) {
        putchar('*');
    }
    printf("\n*");

    for (int i = 0; i <= size-2-line1len; i++){
        if (i == ceil((0.0+size-2-line1len)/2)) printf("%s", line1);
        else putchar(' ');
    }
    printf("*");

    printf("\n*");

    for (int i = 0; i <= size-2-line2len; i++){
        if (i == ceil((0.0+size-2-line2len)/2)) printf("%s", line2);
        else putchar(' ');
    }
    printf("*\n");

    for (int i = 0; i < size; i++) {
        putchar('*');
    }

}