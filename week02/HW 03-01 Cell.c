//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>

int cell() {
    char txt[3];
    scanf("%s", txt);
    printf("*****\n*-*-*\n*%.3s*\n*-*-*\n*****", txt);
    return 0;
}
int main() {
    cell();
    return 0;
}