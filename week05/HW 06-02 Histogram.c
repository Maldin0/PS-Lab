//
// Created by Doomf on 8/16/2023.
//
#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include "ctype.h"

bool isin(char elem, char * str) {
    for (int i = 0; i < strlen(str); i++) {
        if (elem == str[i]) {
            return true;
        }
    }
    return false;
}

int hist() {
    int num;
    scanf("%d", &num);
    char ele[num+1];
    char unique[num];
    int count_uni = 0;
    for (int i = 0; i < num; i++) {
        scanf(" %c", &ele[i]);
        ele[i] = tolower(ele[i]) ;
        if (i == 0) {
            unique[i] = ele[i];
            count_uni++;
        }
        if (isin(ele[i], unique)) {
            continue;
        }
        unique[count_uni++] = ele[i];
    }
    unique[count_uni] = '\0';
    ele[num]='\0';

    int temp;
    for (int uninum = 0; uninum < strlen(unique); uninum++) {
        temp = 0;
        printf("%c: ", unique[uninum]);
        for (int elnum = 0; elnum < strlen(ele); elnum++) {
            if (ele[elnum] == unique[uninum]) {
                temp++;
            }
        }
        printf("%d\n", temp);
    }
    return 0;
}

int main() {
    hist();
}