#include<stdio.h>
#include<stdlib.h>

struct node { 
    int data; 
    struct node *link;
};

void main() {
    struct node *start = NULL; // Normal pointer initialized to NULL

    struct node *n1 = (struct node *) malloc(sizeof(struct node));
    n1->data = 5;
    n1->link = start; // n1->link becomes NULL
    start = n1;       // start now holds the address stored in n1

    printf("Node1 Data: %d\n", n1->data);
    printf("Node1 Links to Address: %p\n", (void*)n1->link);

    struct node *n2 = (struct node *) malloc(sizeof(struct node));
    n2->data = 7;
    n2->link = start; // n2->link now holds the address of n1
    start = n2;       // start now holds the address stored in n2

    printf("Node2 Data: %d\n", n2->data);
    printf("Node2 Links to Address (n1): %p\n", (void*)n2->link);
}