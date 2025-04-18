//Write a programme to find majority element (Brute Force Approach) --> O(n^2)
#include<iostream>
#include<vector>
using namespace std;

int majorityBrute(vector<int> nums){
    int check = (nums.size())/2;
    
    for (int val: nums){
        int count = 0;
        for(int elm:nums){
            if (elm==val){
                count += 1;
                if (count > check){
                    return val;
                }
            }
        }
    }
    return 0;
}



int main(){
    vector <int> nm = {2,2,2,3,1};
    cout<< "Majority Element: "<< majorityBrute(nm)<<endl;
    return 0;
}
