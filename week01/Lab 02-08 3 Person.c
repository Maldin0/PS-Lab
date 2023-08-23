//
// Created by Doomf on 7/12/2023.
//
#include <stdio.h>
int person() {
    char fname1[100];
    char sname1[100];
    char person2[100];
    char person3[100];
    scanf("%s\n%s\n%[^\n]\n%[^\n]", fname1, sname1, person2, person3);
    printf("Person 1: %s %s\n"
           "Person 2: %s\n"
           "Person 3: %s", fname1, sname1, person2, person3);
    return 0;
}

int main() {
    person();
    return 0;
}