#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {

    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->link = NULL;

    head->link = ptr;

    
    struct node *node1 = malloc(sizeof(struct node));
    node1->data = 72;
    node1->link = head->link;
    head->link = node1;

    
    struct node *node2 = malloc(sizeof(struct node));
    node2->data = 31;
    node2->link = node1;
    head->link = node2;

    
    struct node *node3 = malloc(sizeof(struct node));
    node3->data = 17;
    node3->link = node2;
    head->link = node3;

    
    struct node *node4 = malloc(sizeof(struct node));
    node4->data = 55;
    node4->link = node3;
    head->link = node4;


    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }

    return 0;
}
