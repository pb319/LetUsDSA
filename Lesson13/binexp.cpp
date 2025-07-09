//Write a programme to compute pow(x,n)
//-2^31 <= n <= 2^31 -1
//10^8 operations/ second is allowed

#include<iostream>
using namespace std;

long int simpleMul(long int x,long int n){
    long mul = 1;
    for(int i=0;i<n;i++){
        mul *= x;
    }
    return mul;
}

int main(){
    long int x,n;
    cout<<"Enter X: "<<endl;
    cin>>x;
    cout<<"Enter N: "<<endl;
    cin>>n;
    cout<<"pow(X,N): "<<simpleMul(x,n)<<endl;
    return 0;
}