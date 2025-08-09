// Given an integer array nums, return an array answer such that answer[i] is equal
// to the product of all the elements of nums except nums[i].

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

#include<iostream>
#include<vector>
using namespace std;

vector<int> bruteProd(vector<int>& nums){
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        int prod = 1;
        for(int j=0; j<nums.size(); j++){
            if(i!=j){
                 prod *= nums[j];
            }
            
        }
        // cout<<"Prod: "<<prod<<endl;;
        ans.push_back(prod);
    }
    return ans;

}

int main(){
    vector <int> nums = {1,2,3,4};
    cout<<"Intput : ";
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;

    cout<<"Output : ";
    for(int num:bruteProd(nums)){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}