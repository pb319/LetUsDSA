// Write a programme to search single element in a repeating sorte array
#include<iostream>
#include<vector>
using namespace std;

int bruteSingle(vector <int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]!= arr[i+1]){
                return i;
            }
        }
        else if(i==n-1){
            if(arr[i-1]!= arr[i]);
        }
        else{
            if(arr[i-1]!= arr[i] & arr[i]!= arr[i+1]){
                return i;
            }
        }
    }
    return -1;
}

int twopSingle(vector <int> arr){
    return -1;
}


int main(){
    vector <int> arr = {1,1,2,2,3,4,4};
    cout<<"Given Array: "<<endl;
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Bruteforce Single Element: "<<bruteSingle(arr)<<endl;
    return 0;
}