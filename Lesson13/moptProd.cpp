// The most optimized (time & space) code for Product of An Array
#include<iostream>
#include<vector>
using namespace std;

vector <int> productExcSel(vector <int> nums){
    int n = nums.size();
    vector <int> prefix(n,1);
    vector <int> suffix(n,1);
    vector <int> ans(n,1);

    //prefix
    for(int i=1;i<n;i++){
        prefix[i]= prefix[i-1]*nums[i-1];
    }
    //suffix
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }
    // ans array
    for(int i=1;i<n;i++){
        ans[i]= prefix[i]*suffix[i];
    }

    return ans; 
    
}

vector <int> linExcSel(vector <int> nums){
    int n = nums.size();
    int suff=1;

    // vector <int> prefix(n,1);
    // vector <int> suffix(n,1);
    vector <int> ans(n,1);

    //prefix
    for(int i=1;i<n;i++){
        ans[i]= ans[i-1]*nums[i-1];
    }
    //suffix
    for(int i=n-2;i>=0;i--){
        suff *= nums[i+1];
        ans[i]*= nums[i] * nums[1];
    }

    return ans; 
    
}


int main(){
    vector <int> nums = {1,2,3,4};
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    for (int val: linExcSel(nums)){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}