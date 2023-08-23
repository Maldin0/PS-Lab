//
// Created by Doomf on 7/12/2023.
//
#include <stdio.h>

int shift(){
    char c1, c2, c3, c4, c5;
    scanf("%c\n%c\n%c\n%c\n%c", &c1, &c2, &c3, &c4, &c5);
    int i1, i3, i5;
    i1 = c1+1;
    i3 = c3+1;
    i5 = c5+1;
    printf("%c\n%c\n%c\n%c\n%c", i1, c2, i3, c4, i5);
    return 0;
}

int main() {
    shift();
    return 0;
}