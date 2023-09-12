//
// Created by Doomf on 9/9/2023.
//
#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main() {
    char txt[2001] = {0};

    scanf("%[^\n]", txt);

    for (int i = 0; txt[i] != '\0'; i++) {
        txt[i] = tolower(txt[i]);
    }

    char * pos = txt;
    int first = 1;

    while ((pos = strstr(pos, "cat")) != NULL) {
        if (pos != txt && !first) {
            printf(", ");
        }
        printf("%lld", pos-txt);
        pos++;
        first = 0;
    }
}