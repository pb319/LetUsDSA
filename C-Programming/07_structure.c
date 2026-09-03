// Write a code to ask user enter details of two students. Once entered. print the roll numbers one by one.

#include <stdio.h>

struct student{
    int rno;
    int age;
    float fees;
};

void main(){
    struct student s1;
    
    printf("Enter Details:\nRoll Number:\n");
    scanf("%d",&s1.rno);
    printf("Enter Age:\n");
    scanf("%d",&s1.age);
    printf("Enter Fees:\n");
    scanf("%f",&s1.fees);
    
    printf("Enrollment of Roll Number-%d Complete\n",s1.rno);


    return;
}