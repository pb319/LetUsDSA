//Write a programme to sort a given array using selection sort
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void selectionSort(vector <int>& nums){
    int n = nums.size();
    for(int i=0; i< n-1;i++){
        int sel = i ;
        for(int j=i+1; j<n; j++){
            if(nums[j]<nums[sel]){
                sel = j;
            }
        }
        
        swap(nums[i],nums[sel]); 
        
        
    }
}

int main(){
    vector <int> num1 = {5,1,2,7};
    selectionSort(num1);
    for(int val:num1){
        cout<<val<<" ";
    }
    cout<<endl;

    vector <int> num2 = {1,2,5,9,10,13,2};
    selectionSort(num2);
    for(int val:num2){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}