//Write a programme showcasing linear time complexity
//Sum of First N Natural Numbers

#include<iostream>
using namespace std;

int sumN(int N){
    int ans=0;
    for(int i=0;i<N;i++){
        ans += i;
    }
    return ans;
}

int main(){
    cout<<"Sum: "<<sumN(11)<<endl;
}