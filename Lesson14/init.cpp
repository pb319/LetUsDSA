//Write a programe to do the following:
//arr = [-1,0,3,4,5,9,12], target = 12
//If found return index(idx) else return -1

#include<iostream>
#include<vector>
using namespace std;

int findIdx(vector <int> nums, int target){
    int ans = 0;
    int n = nums.size();
    int st = ans,end = n-1,mid;
    while(st<end){
        mid = (st+end)/2;
        if(nums[mid]<target){
            st = mid;
        }else{
            end = mid;
        }
        cout<<" "<<mid;
    }
    if(nums[mid]==target){
        return ans;
    }else{
        return -1;
    }
    
}

int main(){
    vector <int> nums = {-1,0,3,4,5,9,12};
    int target = 12;
    cout<<"Given Target: "<<target<< endl;
    cout<<"Given Array: [ ";
    for(int val: nums){
        cout<<val<<" ";
    }
    cout<<"]"<<endl;
    cout<<"Idx: "<<findIdx(nums,target)<<endl;
    return 0;
}