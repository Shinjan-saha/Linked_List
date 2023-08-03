#include<stdio.h>
#include<stdlib.h>


struct node{

int data;
struct node *link;

};

int main(){

struct node *head=malloc(sizeof(struct node));
struct node *node1=malloc(sizeof (struct node));
struct node *node2=malloc(sizeof(struct node));

head->data=45;
head->link=node1;
node1->data=32;
node1->link=node2;
node2->data=28;
node2->link=NULL;


 struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }




}
