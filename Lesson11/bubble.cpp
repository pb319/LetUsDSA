//Write a programme to sort a given array using "Bubble Sort" [O(n^2)]
#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector <int>& nums){
    int n =(nums.size());
    for(int i=0; i< n-1; i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}


int main(){
    vector <int> nums = {5,2,3,1};
    bubbleSort(nums);
    for(int val:nums){
        cout<<val<<" ";
    }
    cout<<endl;
}