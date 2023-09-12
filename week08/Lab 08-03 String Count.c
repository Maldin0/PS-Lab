//
// Created by Doomf on 9/6/2023.
//
#include "stdio.h"
#include "string.h"
int main() {
    char txt[151];
    char letter;
    int count = 0;
    scanf(" %c", &letter);
    scanf(" %[^\n]", txt);
    txt[strlen(txt)] = '\0';
    int size = strlen(txt);

    for (int i = 0; i < size; i++) {
        if (txt[i] == letter || txt[i] == letter + 32 || txt[i] == letter - 32) {
            count++;
        }
    }

    printf("%d", count);
}