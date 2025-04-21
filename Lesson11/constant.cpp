//Write a programme to showcase Constant Time Complexity (O(1))

//Comsider Finding Sum of first N integers

#include<iostream>
using namespace std;

int sumN(int N){
    return (N*((N+1)/2));
}

int main(){
    int N;
    cout<<"Enter an Integer: "<<endl;
    cin>>N;
    cout<<"Sum: "<<sumN(N)<<endl;
    return 0;
}