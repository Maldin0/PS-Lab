//
// Created by Doomf on 9/9/2023.
//
#include "stdio.h"
#include "string.h"


struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

void print_info(struct Record * record) {
    printf("%s\n"
           "%s\n"
           "%ld\n"
           "%.2f\n"
           "%ld\n"
           "%.2f\n", record->id, record->name, record->sales, 0.02*record->sales, record->salary, 0.02*record->sales+record->salary);
}

int main() {
    int num;
    scanf("%d", &num);

    struct Record record[num];

    for (int i = 0; i < num; i++) {
        scanf("%s %s %ld %ld", record[i].id, record[i].name, &record[i].salary, &record[i].sales);
    }

    char find_id[10] = {0};
    scanf("%s", find_id);

    for (int i = 0; i < num; i++) {
        if (strcmp(record[i].id, find_id) == 0) {
            print_info(&record[i]);
            return 0;
        }
    }
    printf("ID not found !!!\n");
}