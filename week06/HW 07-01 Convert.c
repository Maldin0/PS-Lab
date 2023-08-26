//
// Created by Doomf on 8/23/2023.
//
#include "stdio.h"
#include "strings.h"

void swpCase(char * str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] -= 'A'-'a';
        } else if ('a' <= str[i] && str[i] <= 'z') {
            str[i] += 'A' - 'a';
        }
    }
}

char * cpr(char * str1, char * str2) {
    return strcasecmp(str1, str2) == 0 ? "Both strings are the same." : "Both strings are not the same.";
}

int main() {
    char arr[2][101];

    for (int i = 0; i < 2; i++) {
        scanf(" %[^\n]", arr[i]);
        getchar();
        swpCase(arr[i]);
    }
    printf("*** Results ***\n"
           "%s\n"
           "%s\n"
           "***************\n"
           "%s", arr[0], arr[1], cpr(arr[0], arr[1]));
}
