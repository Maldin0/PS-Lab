//
// Created by Doomf on 8/10/2023.
//
#include "stdio.h"
#include "stdlib.h"
#include <ctype.h>
#include <string.h>

void cap(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i-1] == ' ' && i > 0) {
            str[i] = toupper(str[i]);
            continue;
        }
        str[i] = i == 0 ? toupper(str[i]) : tolower(str[i]);
    }
}

int str_comp(const void *strA, const void *strB) {
    return strcmp((const char *)strA, (const char *)strB);
}

int sort_name() {
    char name_arr[20][60];

    for (int i = 0; i < 20; i++) {
        scanf(" %[^\n]s", name_arr[i]);
        cap(name_arr[i]);
    }

    qsort(name_arr, 20, sizeof(name_arr[0]), str_comp);
    for (int i = 0; i < 20; i++) {
        printf("%s\n", name_arr[i]);
    }
    return 0;
}

int main() {
    sort_name();
}