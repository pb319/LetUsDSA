// Given an integer array nums, return an array answer such that answer[i] is equal
// to the product of all the elements of nums except nums[i].

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

//Using Division

#include<iostream>
#include<vector>
using namespace std;

vector <int> divProduct(vector <int> nums){
    vector <int> ans;
    int count=0;
    int n = nums.size();
    int mul = 1;
    for(int num:nums){
        mul*=num;
    }
    // cout<<"Mul: "<<mul;
    for (int i=0;i<n; i++){
        ans.push_back(mul/nums[i]);
    }
    return ans;
}

int main(){
    vector <int> nums = {1,2,3,6};
    for(int num:nums){
        cout<<num<<" ";
    }
    // divProduct(nums);

    cout<<endl;
    for(int num1:divProduct(nums)){
        cout<<num1<<" ";
    }
    cout<<endl;
    return 0;
}
