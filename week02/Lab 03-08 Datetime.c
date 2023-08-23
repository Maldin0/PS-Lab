//
// Created by Doomf on 7/19/2023.
//
#include <stdio.h>

int date() {
    int sec;
    scanf("%d", &sec);
    printf("%d s = %d d %d h %d m %d s", sec, sec/86400, sec%86400/3600, sec%86400%3600/60, sec%86400%3600%60);
    return 0;
}
int main() {
    date();
    return 0;
}