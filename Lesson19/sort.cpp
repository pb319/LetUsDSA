// Write a programme demonstrating the Bubble Sort, Selection Sort and Incertion Sort


#include<iostream>
#include<vector>
using namespace std;

//Bubble Sort --> Pushing Larger element at the end through Adjacent Comparison
void bubbleSorted(vector <int> &arr, int size){
    int iter = size;

    for(int i=0;i<size;i++){
       cout<<"Iteration"<<i+i<<endl;

       for (int j=0;j<size-i;j++){
         if(arr[j]>arr[j+1]){
            swap(arr[i],arr[i+1]);
        }
        for(int val:arr){
        cout<<val<<" ";
            }
        cout<<endl;
       }

    }
}


int main(){
    vector <int> arr = {4,1,5,2,3};
    bubbleSorted(arr,arr.size());
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}


