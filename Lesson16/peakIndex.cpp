// Write a Programme to find the peak index in a Mountain Array
#include<iostream>
#include<vector>
using namespace std;

int bruteMountain(vector <int> arr){
for(int i=1;i<arr.size()-1;i++){
    if(arr[i-1]<arr[i] & arr[i+1]<arr[i]){
        return i;
    }
}
return -1;
}

int main(){
    vector <int> arr = {0,1,3,6,7,2,4};
    cout<<"Give Array: "<<endl;
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Index: "<<bruteMountain(arr)<<endl;
    return 0;
}


