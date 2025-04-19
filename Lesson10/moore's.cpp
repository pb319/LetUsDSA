// Write a programme to figure out majority element (using Moore's algorithm)
#include<iostream>
#include<vector>
using namespace std;

int majorityMoore(vector <int> nums){
    int freq = 0; int ans= 0;
    for (int i=0; i<nums.size(); i++){
        if (freq==0)
        {
            ans=nums[i];
        }
        if(nums[i]==ans){
            freq++;
        }else{
            freq--;
        }
        
    }
    return ans;
}

int main(){
    vector <int> num = {1,2,3,3,3};
    cout<<"Majority Element: "<< majorityMoore(num)<<endl;
    return 0;
}



