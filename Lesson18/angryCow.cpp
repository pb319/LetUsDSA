// Write a programe to assign C Cows to N Stalls such that min distance between them is largest possible. Return largest minimum distance.

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

bool isValid(vector <int> arr, int size,  int mlimit){
    
    return false;
}

int angryCow(vector <int> arr, int size, int cownum){
    int minm = INT_MAX,maxm=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]<minm){
            minm = arr[i];
        }
        if(arr[i]>maxm){
            maxm = arr[i];
        }
    }
    int en = maxm -minm, st =1;
    int mid;
    for(int i=0;i<size;i++){
        mid = st + (en-st)/2;
        if(isValid(arr,size,mid)){
            st = mid+1;
        }else{
            en = mid-1;
        }
    }
    return -1;
}

int main(){

    return 0;
}