//
// Created by Doomf on 9/8/2023.
//
#include "stdio.h"
#include "string.h"

int main() {
    int count_char = 0, count_word = 0, count_line = 0;
    while (1) {
        char line[150] = {0};
        scanf(" %[^\n]", line);

        if (strcmp(line, ".") == 0) break;
        count_word++;

        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != ' ') {
                count_char++;
            } else count_word++;
        } count_line++;
    }

    printf("Char = %d, word = %d, line = %d", count_char, count_word, count_line);
}