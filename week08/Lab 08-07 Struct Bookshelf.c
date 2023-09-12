//
// Created by Doomf on 9/9/2023.
//
#include "stdio.h"
#include "string.h"

int main() {
    struct Book {
        char id[11];
        char name[101];
        char author[101];
    };

    int nBook;
    char find[11] = {0};

    scanf(" %d\n%s", &nBook, find);

    struct Book shelf[nBook];

    for (int i = 0; i < nBook; i++) {
        scanf(" %s %s %s", shelf[i].id, shelf[i].name, shelf[i].author);
    }

    for (int i = 0; i < nBook; i++) {
        if (strcmp(shelf[i].id, find) == 0) {
            printf("%s %s %s\n", shelf[i].id, shelf[i].name, shelf[i].author);
            return 0;
        }
    }

    printf("Not Found\n");

}