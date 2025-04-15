// Write a programme to print the maximum subarray sum (Bruteforce)--> O(n^2)
#include<iostream>
#include<limits.h>
using namespace std;

int maxSumBrute(int arr[], int size){
    int maxSum = INT_MIN ;
    for (int st=0; st<size; st++){
        int currSum =0;
        for(int en=st; en<size; en++){
            currSum += arr[en];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}


int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {1,2,-3,-4};
    cout<<"Max Sum1: "<<maxSumBrute(arr1,3)<<"\n";
    cout<<"Max Sum2: "<<maxSumBrute(arr2,4)<<"\n";
    return 0 ;
}