#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* add_middle(struct node **head, int data, int position) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        if (position <= 1) {
            newNode->link = *head;
            *head = newNode;
        } else {
            struct node* current = *head;
            int currentPosition = 1;
            while (current != NULL && currentPosition < position - 1) {
                current = current->link;
                currentPosition++;
            }
            if (current != NULL) {
                newNode->link = current->link;
                current->link = newNode;
            } else {
                printf("Invalid position to add the node.\n");
            }
        }
    }

    return *head;
}

void printList(struct node* head) {
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }
    printf("\n");
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
    add_middle(&head, data, 2);


    printList(head);


    struct node* current = head;
    while (current != NULL) {
        struct node* temp = current;
        current = current->link;
        free(temp);
    }

    return 0;
}
