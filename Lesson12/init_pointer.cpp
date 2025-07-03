// Write a programme to create a pointer and print addesses stored in it and its own
#include <iostream>
using namespace std;

int main(){
    int a  = 10;
    int* apt = &a;
    cout<<"a : "<< &a << endl;
    cout<<"pointer : "<< apt << endl;
    cout<< "pointer (own) : "<< &apt<< endl;
    return 0;
}