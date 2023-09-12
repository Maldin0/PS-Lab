//
// Created by Doomf on 9/9/2023.
//
#include <stdio.h>
#include <string.h>

int main() {
    char txt[101] = {0};
    scanf(" %100[^\n]", txt);

    while (1) {
        int i = 0;
        int modified = 0;

        while (txt[i] != '\0') {
            int count = 1;
            int j = i;

            while (txt[j] == txt[j + 1]) {
                count++;
                j++;
            }

            if (count % 2 == 0) {
                // Remove the consecutive characters with even count
                memmove(&txt[i], &txt[i + count], strlen(&txt[i + count]) + 1);
                modified = 1;
            } else {
                // Move to the next character
                i++;
            }
        }

        if (!modified) break;

        printf("%s\n", txt);
    }

    return 0;
}
