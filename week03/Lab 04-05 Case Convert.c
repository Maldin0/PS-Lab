//
// Created by Doomf on 7/26/2023.
//
#include "stdio.h"

int convert()
{
    char inTxt;
    char outTxt;
    scanf("%c", &inTxt);
    if (inTxt >= 'A' && inTxt <= 'Z')
    {
        outTxt = inTxt + 32;
    } else if (inTxt >= 'a' && inTxt <= 'z')
    {
        outTxt = inTxt - 32;
    } else
    {
        printf("error");
        return 1;
    }
    printf("%c", outTxt);
    return 0;
}

int main() {
    convert();
    return 0;
}