#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* list;
};

// create a function to create nodes
void createnode(int item, struct node** start){
    struct node* n = (struct node*) malloc(sizeof(struct node));
    n->data= item;
    n->list= *start;
    *start= n;
}


void main(){
    // initialization of linked list
    struct node* start= NULL;
    int item;
    printf("Enter data\n");
    scanf("%d",&item);
    struct node* n = (struct node*) malloc(sizeof(struct node));
    n->data= item;
    n->list= start;
    start= n;

    printf("Enter data\n");
    scanf("%d",&item);
    n = (struct node*) malloc(sizeof(struct node));
    n->data= item;
    n->list= start;
    start= n;

    createnode(1,&start);
    printf("You Liked List is as follows:\n");
    // traversing a Linked List
    struct node* p;
    p= start;
    int count =0;
    while(p != NULL){
        count++;
        printf("Node %d: |%d |%u |\n", count,p->data,p);
        p=p->list;
    }


}