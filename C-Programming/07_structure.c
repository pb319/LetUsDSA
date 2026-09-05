// Write a code to ask user enter details of two students. Once entered. print the roll numbers one by one.

#include <stdio.h>

struct student{
    int rno;
    int age;
    float fees;
};

void main(){
    struct student s1, *s; // declaration of a pointer of datatype struct student
    
    printf("Enter Details:\nRoll Number:\n");
    scanf("%d",&s1.rno);
    printf("Enter Age:\n");
    scanf("%d",&s1.age);
    printf("Enter Fees:\n");
    scanf("%f",&s1.fees);
    s= &s1; //assigning adderess of s1 structure
    printf("Enrollment of Roll Number-%d Complete\n",s1.rno);
    printf("The Pointer stores %u\n",s);
    printf("The Pointer points to %d\n",*s);
    // printf("The (*s+1) points to %u\n",(*s+1));
    printf("Address of s1.age %u\n",&(s1.age));
    printf("The s->age points to %u\n",s->age);


    return;
}