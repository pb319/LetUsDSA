#include <stdio.h>
struct student{
    int rno;
    int age;
    float fees;
};

void main(){
    struct student s1, s2;
    printf("%d Bytes \n",sizeof(s1));

    return;
}