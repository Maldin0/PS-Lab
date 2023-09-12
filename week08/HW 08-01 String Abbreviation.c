//
// Created by Doomf on 9/9/2023.
//
#include "stdio.h"

int main() {
    char name[200] = {0};

    scanf("%[^\n]", name);

    printf("%c.", name[0]);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c.", name[i+1]);
            return 0;
        }
    }
}