#include<stdio.h>

union trainee {
    char name[25];
    int mno;
    float slr;
};

void main(){
    union trainee t1, t2;
    printf("Enter Name\n");
    scanf("%24s",&t1.name); // Taking in Sequesce of Charachters
    printf("Enter Mobile Number\n");
    scanf("%d",&t1.mno);
    printf("Enter Salary\n");
    scanf("%f",&t1.slr);

    printf("Thanks Information Received!\n");
}


