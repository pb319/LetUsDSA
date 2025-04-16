//Write a programme to find pair-sum (Brute Force)
#include<iostream>
#include<vector>
using namespace std;

vector <int> pairSumBrute(vector <int> nums, int target){
    int sum;
    vector <int> vec;
    for(int i=0; i<nums.size(); i++){

        for(int j=i+1;j<nums.size();j++){

            if (nums[i] + nums[j] == target){
                cout<<"Indices are: "<<"\n";
                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }

        }
    }
    return vec;
}

int main(){
    vector <int> num = {2,5,8,11};
    vector <int> idx = pairSumBrute(num, 10); 
    cout<<idx[0]<<","<<idx[1]<<endl;
    return 0;
}