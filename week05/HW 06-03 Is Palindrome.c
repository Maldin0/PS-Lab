//
// Created by Doomf on 8/16/2023.
//
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

char * rev(char * str) {
    int size = strlen(str);
    char *rev_str = malloc(size+1);
    for (int i = size-1; i >= 0; i--) {
        rev_str[size-1-i] = str[i];
    }
    rev_str[size] = '\0';
    return rev_str;
}

int main() {
    char txt[100];
    scanf(" %[^\n]s", txt);
    char * rev_txt = rev(txt);
    if (strcmp(txt, rev_txt) == 0) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }
    free(rev_txt);
    return 0;
}