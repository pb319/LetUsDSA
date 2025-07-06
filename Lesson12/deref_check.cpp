// Write a programme to check value retrival using pointer and p2pointer
#include<iostream>
using namespace std;

int main(){
    int a = 15;
    int* ptr = &a;
    int** p2ptr = &ptr;

    // Let's check if deref works
    if(ptr == *(p2ptr)){
        cout<<"They're the same!"<< endl;
    }else{
        cout<<"They're different!"<< endl;
    }

    return 0;
}