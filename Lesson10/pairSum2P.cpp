//write a programme to find pair-sum (2-Pointer Approach)
// Utilizing Sorted Array (Ascending Order)

#include<iostream>
#include<vector>
using namespace std;


vector <int> pairSum2p(vector <int> nums,int target){
    vector <int> ans ;
    int st=0 , en=nums.size()-1;
    while(st<en){
        if (nums[st]+nums[en]==target)
        {
            cout<<"We're in\n";
            ans.push_back(st);
            ans.push_back(en);
            return ans;
        }
        else if (nums[st]+nums[en]>target)
        {
            en--;
        }
        else{
            st++;
        }
          
        
    }

    return ans;
}


int main(){
    vector <int> num = {2,5,8,11};
    vector <int> idx = pairSum2p(num, 10); 
    cout<<idx[0]<<","<<idx[1]<<endl;
    return 0;
}
