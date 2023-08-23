//
// Created by Doomf on 7/12/2023.
//
#include <stdio.h>

int regis() {
    char f_name[30];
    char l_name[30];
    int std_id;
    int day;
    int month;
    int year;
    float gpa;
    scanf("%s\n%s\n%d", f_name, l_name, &std_id);
    scanf("%d/%d/%d\n%f", &day, &month, &year, &gpa);

    printf("Fullname: %s %s\nID: %d\n", f_name, l_name, std_id);
    printf("DOB: %02d-%02d-%04d\nGPA: %.2f", day, month, year, gpa);


    return 0;
}


int main() {
    regis();
    return 0;
}