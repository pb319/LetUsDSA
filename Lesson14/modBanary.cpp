// write a code to modify the existing program of binary search
#include<iostream>
#include<vector>
using namespace std;

int modBinarySearch(vector <int> nums, int tar){
    int n = nums.size();
    int st = 0;
    int en = n-1;
    int mid ;

    while(st<=en){
        mid =  st + (en-st)/2;
        if(tar > nums[mid]){
            st = mid + 1;
        }
        else if (tar < nums[mid])
        {
            en = mid -1;
        }
        
        else{
            return mid;
        }
    }

    return -1;


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
    cout<<"Idx: "<<modBinarySearch(nums,target)<<endl;
    return 0;
}