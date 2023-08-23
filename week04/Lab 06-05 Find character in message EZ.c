//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"
#include "string.h"

int fin() {
    char txt[300];
    char letter;
    int count = 0;
    int dups[300];
    scanf("%[^\n]s", txt);
    scanf("\n%c", &letter);
    int size = strlen(txt);

    for (int i = 0; i < size; i++) {
        if (txt[i] == letter || txt[i] == letter+32 || txt[i] == letter-32) {
            dups[count] = i+1;
            count++;
        }
    }
    if (count == 0) {
        printf("Not found.");
        return 0;
    }
    printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", count, letter);
    for (int i = 0; i < count-1; i++) {
        printf("%d, ", dups[i]);
    }
    printf("%d", dups[count-1]);
    return 1;
}

int main() {
    fin();
    return 0;
}
