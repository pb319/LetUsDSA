//Write a programme to implement "Binary Search" given a sorted* array [O(logn)]
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector <int> nums, int target){

    int n = nums.size();
    int st=0,en=n-1;
    

    while(st<=en){
        int mid = st + (en-st)/2;
        if(nums[mid]>target){
            en = mid - 1;
        }else if(nums[mid]<target){
            st = mid + 1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector <int> nums = {1,2,3,5,7,9};
    cout<<"5 is at: "<<binarySearch(nums,5)<<endl;
    cout<<"7 is at: "<<binarySearch(nums,7)<<endl;
    return 0;
}