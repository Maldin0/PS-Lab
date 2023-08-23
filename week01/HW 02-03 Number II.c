//
// Created by Doomf on 7/12/2023.
//
#include <stdio.h>
int number2() {
    char line[5];
    scanf("%s", line);
    printf("%.1s%79s"
           "%3.2s%77s"
           "%5.3s%75s"
           "%7.4s%73s"
           "%9.5s", line, "", line, "", line, "", line, "", line);
    return 0;
}
int main(){
    number2();
    return 0;
}