//Write a programme to find the target index for a given array using recurssion
#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector <int> nums, int tar, int st , int en){
   int mid = st + (en-st)/2;
   if (st <= en){
   if(tar>mid){
     return recBinarySearch(nums,tar,mid+1,en);
   }
   else if (tar<mid)
   {
    return recBinarySearch(nums,tar,st,mid-1);
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
    cout<<"Idx: "<<recBinarySearch(nums,target,0,nums.size()-1)<<endl;
    return 0;
}

