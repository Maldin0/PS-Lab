//
// Created by Doomf on 7/29/2023.
//
#include "stdio.h"
#include "ctype.h"

int type()
{
    char txt;
    scanf("%c", &txt);

    if (islower(txt))
    {
        printf("lowercase");
    } else if (isupper(txt))
    {
        printf("uppercase");
    } else if (isdigit(txt)) {
        printf("number");
    } else
    {
        printf("error");
    }
    return 0;
}

int main()
{
    type();
    return 0;
}