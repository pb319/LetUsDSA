//Write a code to initiate pointer to pointer variable
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** pptr = &ptr;

    cout<<"Address of variable a: "<< &a << endl;
    cout<<"Address of variable pointer: "<< ptr << endl;
    cout<<"Address of variable pointer to pointer: "<< pptr << endl;
    return 0;
}