//
// Created by Doomf on 9/6/2023.
//
#include "stdio.h"
#include "string.h"

int main() {
    char text[151];
    scanf("%[^\n]", text);
    text[strlen(text)] = '\0';
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ') {
            printf("%c", text[i]);
        }
    }
}