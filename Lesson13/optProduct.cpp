// Given an integer array nums, return an array answer such that answer[i] is equal
// to the product of all the elements of nums except nums[i].

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

#include<iostream>
#include<vector>
using namespace std;

vector <int> optProduct(vector <int> nums){
    int count =1 ;
    int n = nums.size() ;
    int fp = 1 ;
    int bp = n-2 ;
    int pt ;
    vector <int> prefix = {1};
    vector <int> suffix = {1};
    vector <int> ans;
    while(count<n){
        prefix.push_back(nums[fp-1]*prefix[fp-1]);
        suffix.push_back(nums[bp+1]*suffix[fp-1]);
        fp ++;
        bp --;
        count++;
    }
    for (int i=0; i<n;i++){
        ans.push_back(prefix[i]*suffix[n-i]);
    }
    cout<<endl;
    for (int val:prefix){
        cout<<val<<" ";
    }
    cout<<endl;

    for (int val:suffix){
        cout<<val<<" ";
    }
    cout<<endl;
    return ans;

}

int main(){
    vector <int> nums = {1,2,3,6};
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    for (int val: optProduct(nums)){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
