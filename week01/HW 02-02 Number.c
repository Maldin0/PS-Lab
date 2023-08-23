//
// Created by Doomf on 7/12/2023.
//
#include <stdio.h>

int number(){
    char n1, n2, n3, n4, n5;
    scanf("%c%c%c%c%c", &n1, &n2, &n3, &n4, &n5);
    printf("%c%c%c%c%c", n3, n4, n5, n1, n2);
    return 0;
}

int main() {
    number();
}