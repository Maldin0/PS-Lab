//
// Created by Doomf on 9/9/2023.
//
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"

struct info {
    char fname[61];
    char lname[61];
    char gender[7];
    int age;
    char std_num[13];
    double gpa;
};

int str_cmp(const void *strA, const void *strB) {
    return strcmp((const char *)strA, (const char *)strB);
}

int compareByID(const void *a, const void *b) {
    const struct info *studentA = (const struct info *)a;
    const struct info *studentB = (const struct info *)b;
    return str_cmp(studentA->std_num, studentB->std_num);
}

int compareByFName(const void *a, const void *b) {
    const struct info *studentA = (const struct info *)a;
    const struct info *studentB = (const struct info *)b;
    return str_cmp(studentA->fname, studentB->fname);
}

int compareByLName(const void *a, const void *b) {
    const struct info *studentA = (const struct info *)a;
    const struct info *studentB = (const struct info *)b;
    return str_cmp(studentA->lname, studentB->lname);
}

void std_add(struct info * std, char * fname, char * lname, char * gender, int age, char * std_num, double gpa) {
    strcpy(std->fname, fname);
    strcpy(std->lname, lname);

    if (strcmp(gender, "Male") == 0) {
        strcpy(std->gender, "Mr");
    } else strcpy(std->gender, "Miss");

    std->age = age;
    strcpy(std->std_num, std_num);
    std->gpa = gpa;
}

int main() {
    struct info std[20];
    char fname[61] = {0}, lname[61] = {0}, gender[7] = {0}, std_num[13] = {0};
    int age;
    double gpa;
    char method[8] = {0};

    for (int i = 0; i < 20; i++) {
        scanf("%s %s %s %d %s %lf", fname, lname, gender, &age, std_num, &gpa);
        std_add(&std[i], fname, lname, gender, age, std_num, gpa);
    }

    scanf("%s", method);
    for (int i = 0; method[i] != '\0'; i++) {
        method[i] = tolower(method[i]);
    }

    // sort base on ID
    if (strcmp(method, "id") == 0) {
        qsort(std, 20, sizeof(struct info), compareByID);
    } else if (str_cmp(method, "name") == 0) {
        // sort base on Fname
        qsort(std, 20, sizeof(struct info), compareByFName);
    } else {
        // sort base on lname
        qsort(std, 20, sizeof(struct info), compareByLName);
    }

    for (int i = 0; i < 20; i++) {
        printf("%s %c %s (%d) ID: %s GPA %.2f\n", std[i].gender, std[i].fname[0], std[i].lname, std[i].age, std[i].std_num, std[i].gpa);
    }
    return 0;
}
