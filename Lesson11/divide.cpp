//Write a programme to divide a given array along its middle until we get single element arrat.
#include<iostream>
#include<vector>
using namespace std;

int divideArr(vector <int> nums, int st , int en ){ //Let's call a recusrsive function
    
    if(st<en){
            int mid = st + (en-st)/2;
        divideArr(nums,st,mid);
        divideArr(nums,mid+1,en);
        if(st==en){
            return nums[st];
        }
    }

}

int main(){
    return 0;
}