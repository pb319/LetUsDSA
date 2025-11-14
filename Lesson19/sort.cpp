// Write a programme demonstrating the Bubble Sort, Selection Sort and Incertion Sort


#include<iostream>
#include<vector>
using namespace std;

//Bubble Sort --> Pushing Larger element at the end through Adjacent Comparison
void bubbleSorted(vector <int> &arr, int size){
    int iter = size;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }

    }
}


int main(){
    return 0;
}


