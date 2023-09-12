//
// Created by Doomf on 9/9/2023.
//
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int chrcmp(const void * a, const void * b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char name[201] = {0};

    scanf("%[^\n]", name);

    qsort(name, strlen(name), sizeof(name[0]), chrcmp);

    printf("%s", name);
    return 0;
}