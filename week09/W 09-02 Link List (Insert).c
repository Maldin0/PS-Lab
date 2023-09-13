//
// Created by Doomf on 9/13/2023.
//
#include "stdio.h"
#include "stdlib.h"

struct node {
    int data;
    struct node *next;
};

void add(struct node * list, int data) {
    struct node * newNode = (struct node *) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    struct node * curr = list;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode;
}

void insert(struct node * head,int size, int data, int pos) {

    if (pos < 0 || pos > size) {
        printf("Invalid position\n");
        return;
    }
    struct node * newNode = (struct node *) malloc(sizeof(struct node));
    newNode->data = data;

    struct node * curr = head;
    for (int i = 0; i < pos && curr != NULL; i++) {
        curr = curr->next;
    }
    if (curr == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}

int main() {
    int num, value;
    scanf(" %d", &num);


    struct node head;
    head.next = NULL;
    for (int i = 0; i < num; i++) {
        scanf(" %d", &value);
        add(&head, value);
    }

    int pos, data;
    scanf("%d\n%d", &pos, &data);
    insert(&head,num, data, pos);

    struct node *current = head.next;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }


    current = head.next;
    while (current != NULL) {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}