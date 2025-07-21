// Write a programme to find out maximum profit possible Given an array of stock prices
#include<iostream>
#include<vector>
using namespace std;


int maxProfit(vector <int> arr){
    int ans = 0;
    int buy = 0;
    while(buy<arr.size()-1){
        int diff = 0;
        for (int sell = buy+1; sell <arr.size(); sell++){
            diff = arr[sell]-arr[buy];
            if (diff > ans){
                ans = diff;
            }
        }
        buy ++;
        
    }
    return ans;
 
}


int main(){
    vector <int> arr = {7,1,5,3,6,4};
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Array Size: "<<arr.size();
    cout<<endl;
    cout<<"Maximum Profit: "<< maxProfit(arr);
    cout<<endl;

    return 0;
}