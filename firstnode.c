#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* add_front(struct node **head, int data) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = *head;
    *head = newNode;
}

int main() {
    struct node* head = malloc(sizeof(struct node));
    struct node* node1 = malloc(sizeof(struct node));
    struct node* node2 = malloc(sizeof(struct node));

    head->data = 45;
    head->link = node1;
    node1->data = 32;
    node1->link = node2;
    node2->data = 28;
    node2->link = NULL;

    int data = 12;
    add_front(&head, data);


    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }
    printf("\n");




    return 0;
}
