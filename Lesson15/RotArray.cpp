// Write a program to find a target from a rotating-ordered array.
// Array = [9,10,11,17,1,3,6] , target = 1

#include<iostream>
#include<vector>
using namespace std;

int findTarget(vector <int> nums, int tar){
    int mid;
    int st =0;
    int en =nums.size()-1;
    while(st<=en){
        mid = st + (en-st)/2;
        // cout<<"Index: "<<mid<<endl;
        // cout<<"Element: "<<nums[mid]<<endl;
        if(nums[st]<nums[mid]){
            if(nums[st]<=tar & tar<= nums[mid] ){
                // cout<<"Inside 11 Block"<<endl;
                en = mid-1;
            }else{
                // cout<<"Inside 12 Block"<<endl;
                st = mid+1;
            }
        }
        
        else if(nums[en]>nums[mid]){
            if(nums[en]>=tar & tar>=nums[mid]){
                // cout<<"Inside 21 Block"<<endl;
                st = mid+1;              
            }else{
                // cout<<"Inside 22 Block"<<endl;
                en = mid-1;
            }
        }

        else if(st = en){
            // cout<<"Inside 3 Block"<<endl;
            return st;

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

    cout<<"Target Index: "<<findTarget(nums,tar)<<endl; 
    return 0;
}