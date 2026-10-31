#include<stdio.h>
#include<stdlib.h> // included to use dynamic memory allocation functions

struct dnode{
    int data;
    struct dnode* prev;
    struct dnode* next;
};

void travdnode(struct dnode* start){
    struct dnode* p = start->next;
    int count =0;
    while(p != NULL){
        count++;
        printf("Node %d: |%u |%d | %u\n", count,p->prev,p->data,p->next);
        p=p->next;
    }


}

void main(){
struct dnode* n1 = (struct dnode*) malloc(sizeof(struct dnode));
n1->data = 1;
n1->prev = NULL;
n1->next = NULL;

struct dnode* start;
start->next = n1;
travdnode(start); //call by value


}