//
// Created by Doomf on 7/12/2023.
//
#include <stdio.h>

int multi() {
    char l1[100];
    char l2[100];
    char l3[100];
    char l4[100];
    scanf("%s\n%s\n%s\n%s", l1, l2, l3, l4);
    printf("String 1: %.3s\n"
           "String 2: %.4s\n"
           "String 3: %.5s\n"
           "String 4: %.6s\n", l1, l2, l3, l4);
    return 0;
}
int main(){
    multi();
}