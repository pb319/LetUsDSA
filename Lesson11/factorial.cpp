// Write a programme to calculate factorial of a number using recursion.
#include<iostream>
using namespace std;

int factN(int n){
    if (n == 1){

        return 1;
    }
    return n * factN(n-1);
}

int main(){
    cout<<"Factorial: "<<factN(5)<<endl;
    return 0 ;
}