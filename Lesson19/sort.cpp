// Write a programme demonstrating the Bubble Sort, Selection Sort and Incertion Sort O(N^2)


#include<iostream>
#include<vector>
using namespace std;

//Bubble Sort --> Pushing Larger element at the end through Adjacent Comparison
void bubbleSorted(vector <int> &arr, int size){
    int iter = size;

    for(int i=0;i<size;i++){
       cout<<"[Iteration]-"<<i+i<<endl;

       for (int j=0;j<size-i-1;j++){
         if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        for(int val:arr){
        cout<<val<<" ";
            }
        cout<<endl;
       }

    }
}

void bubbleSort(int arr[], int size){
    for(int i =0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size){
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector <int> arr1 = {4,1,5,2,3};
    bubbleSorted(arr1,arr1.size());
    cout<<"Approach-1: "<<endl;
    for(int val:arr1){
        cout<<val<<" ";
    }
    cout<<endl;
    
    int arr2[] = {4,1,5,2,3};
    cout<<"Approach-2: "<<endl;
    bubbleSort(arr2,5);
    printArray(arr2,5);

    return 0;
}



