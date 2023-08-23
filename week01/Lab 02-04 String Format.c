//
// Created by Doomf on 7/12/2023.
//
#include <stdio.h>

int s_format() {
    char text[13] = "Hello, world";
    printf("123456789012345678901234567890\n");
    printf("%s*\n", text);
    printf("%20s*\n", text);
    printf("%.20s*\n", text);
    printf("%-20s*\n", text);
    printf("%.10s*\n", text);
    printf("%-10s*\n", text);
    printf("%25.10s*\n", text);
    printf("%25.5s*\n", text);
    printf("%-25.10s*\n", text);
    return 0;
}

int main() {
    s_format();
    return 0;
}