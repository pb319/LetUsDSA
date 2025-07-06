//Write two functions demostrating pass by value and pass by reference (using pointer)
#include<iostream>
using namespace std;

int change_pbv(int a){
    a = 20;
    cout<< "outside main: "<< a<<endl;
    return a;
}

void change_pbr(int* ptr){
    *(ptr) = 20;
}


int main(){
    int a = 10;
    change_pbv(a);
    cout<< "pass by value inside main: "<< a<<endl;
    change_pbr(&a);
    cout<< "pass by ref inside main: "<< a<<endl;
    return 0;
}