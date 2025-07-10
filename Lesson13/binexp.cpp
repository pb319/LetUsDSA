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

long int binexMul(long int x,long int n){
    long int ans = 1;
    if(n<0){
        x = 1/x;
        n *= -1;
    }
    
    while (n>0)
    {
        if (n%2==1)
        {
            ans *= x;
            x *= x;   
        }else{
            x *= x;
        }
        n/=2;
        
    }
    
    return ans;
}


int main(){
    long int x,n;
    cout<<"Enter X: "<<endl;
    cin>>x;
    cout<<"Enter N: "<<endl;
    cin>>n;
    cout<<"pow(X,N): "<<simpleMul(x,n)<<endl;
    cout<<"pow(X,N) - Binary Exponentiation: "<<binexMul(x,n)<<endl;
    return 0;
}