//Write a programme to print Maximum Subarry Sum (Kadane's Algorithm)
#include<iostream>
#include<limits.h>
using namespace std;

int maxSumKad(int arr[], int size){
    int maxSum = INT_MIN;
    int curSum = 0;
    for(int i=0;i<size;i++){
        curSum += arr[i];
        maxSum = max(curSum, maxSum);
        if(curSum<0){
            curSum = 0;
        }
    }
    return maxSum;
}


int main(){
    int arr1[] ={-1,-2,3,7,-5};
    cout<<"Max Subarray Sum: "<<maxSumKad(arr1,5)<<endl;
    return 0;
}
