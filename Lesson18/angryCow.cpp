// Write a programe to assign C Cows to N Stalls such that min distance between them is largest possible. Return largest minimum distance.[14:06]

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

bool isValid(vector <int> arr, int size,  int mlimit){
    
    return false;
}

int angryCow(vector <int> arr, int size, int cownum){
    sort(arr.begin(),arr.end());
    int en = arr[0] -arr[size-1], st =1;
    int mid, ans = -1;
    for(int i=0;i<size;i++){
        mid = st + (en-st)/2;
        if(isValid(arr,size,mid)){
            ans = mid;
            st = mid+1;
        }else{
            en = mid-1;
        }
    }
    return ans;
}

int main(){ 
    vector <int> arr ={1,4,5,2,8};
    
    
    return 0;
}