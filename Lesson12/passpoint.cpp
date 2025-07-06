//Write two functions demostrating pass by value and pass by reference (using pointer)
#include<iostream>
using namespace std;

int change_pbv(int a){    // Pass by Value
    a = 20;
    cout<< "outside main: "<< a<<endl;
    return a;
}

void change_pbp(int* ptr){ // Pass by Ref(Pointer)
    *(ptr) += 20;
}

void change_pba(int &b){ // Pass by Ref(Alias)
    b += 20;
}



int main(){
    int a = 10;
    change_pbv(a);      
    cout<< "pass by value inside main: "<< a<<endl;
    change_pbp(&a);     
    cout<< "pass by pointer inside main: "<< a<<endl;
    change_pba(a);     
    cout<< "pass by alias inside main: "<< a<<endl;
    

    return 0;
}