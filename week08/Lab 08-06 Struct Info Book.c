//
// Created by Doomf on 9/8/2023.
//
#include "stdio.h"
#include "string.h"

int main() {
    struct student_info {
        char fname[61];
        char lname[61];
        char gender[7];
        int age;
        int std_num;
        float gpa;
    } std;

    char fname[61] = {0}, lname[61] = {0}, gender[7] = {0};
    int age, std_num;
    float gpa;

    scanf("%s %s %s %d %d %f", fname, lname, gender, &age, &std_num, &gpa);

    strcpy(std.fname, fname);
    strcpy(std.lname, lname);

    if (strcmp(gender, "Male") == 0) {
        strcpy(std.gender, "Mr");
    } else strcpy(std.gender, "Miss");

    std.age = age;
    std.std_num = std_num;
    std.gpa = gpa;

    printf("%s %c %s (%d) ID: %d GPA %.2f", std.gender, std.fname[0], std.lname, std.age, std.std_num, std.gpa);
}