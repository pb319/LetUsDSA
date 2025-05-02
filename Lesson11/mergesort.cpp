//Write a programme to divide a given array along its middle until we get single element arrat.
#include<iostream>
#include<vector>
using namespace std;

void merge(vector <int> &nums, int st, int mid,int en){
    vector <int> temp;
    int i = st, j= mid+1;
    while(i<=mid && j<= en){
         if(nums[i]<nums[j]){
            temp.push_back(nums[i]);
            i++;
         }else{
            temp.push_back(nums[j]);
            j++;
         }
    }


    while(i<=mid ){   //Left-Part

            temp.push_back(nums[i]);
            i++;
         
    }

    while( j<= en){  //Right-Part
         
            temp.push_back(nums[j]);
            j++;
         
    }

    for(int idx=0;idx< temp.size();idx++){
        nums[idx+st] = temp[idx];
    }
    

}   




void mergesort(vector <int> &nums, int st , int en ){ //Let's call a recusrsive function
    
    if(st<en){
            int mid = st + (en-st)/2;
        mergesort(nums,st,mid);
        mergesort(nums,mid+1,en);
        merge(nums,st,mid,en);
    }

}

int main(){
    vector <int> arr = {1,9,4,2,5};
    mergesort(arr,0,arr.size()-1);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}