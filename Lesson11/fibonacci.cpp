// Write a Programme to print Fibonacci Series using recursion
#include<iostream>
using namespace std;

int fibboRec(int n){
    if (n == 0 || n== 1){
        return n;
    }else{
       return fibboRec(n-1) + fibboRec (n-2) ;
    }
    
}

int main(){
    for(int i=0; i<=10; i ++ ){
        cout<< fibboRec(i)<<" ";
    }
    cout<<endl;
    return 0;
}