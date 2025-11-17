//Write a programme to sort a given array using selection sort algorithm
#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for( int i=0;i<size;i++){
        int smallIdx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[smallIdx]){
                smallIdx = j;
            }
        }
        swap(arr[i],arr[smallIdx]);
    }
}



int main(){

    return 0;
}