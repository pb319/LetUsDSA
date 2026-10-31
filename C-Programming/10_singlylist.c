#include<stdio.h>
#include<stdlib.h> // included to use dynamic memory allocation functions
struct node{
    int data;
    struct node* list;
};
//traversing a given singly linked list
void travlink(struct node* start){
    struct node* p = start;
    printf("You Liked List is as follows:\n");
    int count =0;
    while(p != NULL){
        count++;
        printf("Node %d: |%d |%u |\n", count,p->data,p);
        p=p->list;
    }
    
}

// create a function to create nodes
void createnode(int item, struct node** start){
    struct node* n = (struct node*) malloc(sizeof(struct node));
    n->data= item;
    n->list= *start;
    *start= n;
}

// create a function to insert an element at given location
void insertnode(int item, struct node** loc){
    struct node* n= (struct node*) malloc(sizeof(struct node));
    n->data= item;
    n->list= *loc;
    *loc= n;

}

// deletion of a node at given location


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

    insertnode(11,&(start->list));
    createnode(1,&start);
    travlink(start);


}