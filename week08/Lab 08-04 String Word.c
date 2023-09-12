//
// Created by Doomf on 9/6/2023.
//
#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include "ctype.h"

int main() {
    char text[151] = {0};
    int count = 0;
    bool first = true;

    scanf("%[^\n]", text);

    if (text[strlen(text)-1] != ' ') {
        text[strlen(text)] = ' ';
    }
//    text[strlen(text)] = '\0';

    for (int i = 0; text[i] != '\0'; i++) {
        if (first) {
            first = false;
            continue;
        }
        if (text[i] == ' ' && text[i-1] != ' ') count++;
    }
    printf("%d words\n----\n", count);

    first = true;

    for (int i = 0; text[i] != '\0'; i++) {
        count = 0;
        if (first) {
            for (int j = 0; text[j] != ' '; j++){
                putchar(tolower(text[j]));
                count++;
            }
            printf(" : %d\n", count);
            first = false;
            continue;
        }
        if (text[i] == ' ') {
            if (text[i+1] == '\0') continue;
            for (int j = i+1; text[j] != ' '; j++) {
                putchar(tolower(text[j]));
                count++;
            }
            if (count != 0) {
                printf(" : %d\n", count);
            }
        }
    }

}