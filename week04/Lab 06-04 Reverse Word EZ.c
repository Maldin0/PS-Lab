//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"
#include "string.h"

int re() {
    char txt[100];
    scanf("%[^\n]s", txt);
    int size = strlen(txt);
    for (int i = size-1; i >= 0; i--) {
        printf("%c", txt[i]);
    }
    return 0;
}

int main() {
    re();
    return 0;
}