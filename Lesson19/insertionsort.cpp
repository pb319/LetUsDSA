// Write a programme implement sorting of a given array using selection sort algorithm
#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int curr = arr[i];
        for(int j= i-1;j>=0;j--){
            if(arr[j]>curr){
                arr[j+1]=arr[j];
                arr[j]=curr;
            }else{
                break;
            }
            cout<<"Status After "<<"i= "<<i<<" j= "<<j<<" "<<endl; //debugging
            for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
            }
            cout<<endl;
        
    }
    
    }
}

void alterInsertion(int arr[],int size){
    for(int i=0;i<size;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]<curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[]={4,3,2,1,5};
    insertionSort(arr,5);
    cout<<"Alternative(Descending Order): "<<endl;
    alterInsertion(arr,5);
    printArray(arr,5);
    return 0;
}