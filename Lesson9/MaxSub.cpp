// Write a Programme to print continuous subarrays
#include<iostream>
using namespace std;

void subArray(int arr[], int size){
    for(int st=0;st<size;st++){
        for(int en=st;en<size;en++){
            for(int i = st;i<=en;i++){
                cout<< arr[i];
            }
            cout<<" ";
        }
        cout<<"\n";
    }
    return;
}


int main(){

    int arr[]= {1,2,3,4,5};
    subArray(arr,5);
    return 0;
}