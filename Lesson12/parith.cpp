// Write a programme to demonstrate the pointer arithmatic

#include<iostream>
using namespace std;

int main(){

    // Let's demonstrate the uniary operator
    int a1 = 10;
    int* ptr00 = &a1;
    int* ptr01 = &a1;

    cout <<"Original Address: " << ptr00 << endl;
    ptr00++; // 4 bytes added
    cout <<"Pointer++ Address: " <<ptr00 << endl;
    ptr01--; // 4 bytes added
    cout <<"Pointer-- Address: " << ptr01 << endl;
    cout<<"\n";

    // Let's demonstrate the binary operator
    int a2 = 10;
    int* ptr1 = &a2;
    cout <<"Original Address: " << ptr1 << endl; 
    cout <<"Pointer+3 Address: " << ptr1+3 << endl; // 4 bytes x 3 added
    cout<<"\n";

    int* ptr2 = ptr1+3;
    cout <<"Original Address(*P1): " << ptr1 << endl; 
    cout <<"Original Address(*P2): " << ptr2 << endl;
    cout <<"*P2-*P1 Address: " << (ptr2-ptr1) << endl; // How many lock same datatype can fit in between!
    cout<<"\n";
    
    // Let's demonstrate the logical operator
    if(ptr2<ptr1){
        cout<<"Yes it is!"<<endl;
    }else{
        cout<<"No the're different!"<<endl;
    }

    return 0;
}