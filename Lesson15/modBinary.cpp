// Modify the Binary Search to carry out search operation in a Rotated Sorting Array
#include<iostream>
#include<vector>
using namespace std;

int modBinary(vector <int> nums, int tar){
    int st = 0, en = nums.size()-1;
    int mid;
    while(st <= en){
        mid = st + (en-st)/2;
        if(nums[mid]==tar){
            return mid;
        }
        if(nums[st]<=nums[mid]){
            if(nums[st]<= tar <=nums[mid]){
                en = mid-1;
            }else{
                st = mid+1;
            }
        }
        else{
            if(nums[mid]<= tar <=nums[en]){
                st = mid+1;
            }else{
                en = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector <int> nums = {9,10,11,17,1,3,6};
    int tar = 1;
    cout<<"Given Array: ";
    for(int val: nums){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Target Index: "<<modBinary(nums,tar)<<endl; 
    return 0;
}

