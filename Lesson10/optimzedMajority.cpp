//Write a programme to find the majority element (Optimized Approach) --> O(nlog(n))
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityOpt(vector <int> nums){
    int freq = 1;
    for (int i=1;i<nums.size();i++){
        if(nums[i]== nums[i-1]){
            freq++;
            if (freq>nums.size()/2){
                return nums[i];
            }
            else{
                freq =1;
            }
        }
    }
    return -1;
}


int main(){
    vector <int> num ={7,5,5,5,4}; 
    sort(num.begin(),num.end()); //O(nlog(n))
    cout<<"Majority Element: "<< majorityOpt(num);
    cout<<"\n";
    return 0;
}