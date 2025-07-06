//Write a programme to demonstrate usage of dereferencing operator
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;

    cout<<"Value at a: "<< a  <<endl;
    cout<<"Value at adress o the pointer: "<< *(ptr)<< endl;
    return 0;
}