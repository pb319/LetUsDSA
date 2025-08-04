// Write a program to buy and sell stock with maximum profit (Optimized)
#include<iostream>
#include<vector>
using namespace std;

int bestBuy(vector<int> prices){
    int maxProfit =0;
    int bestBuy = prices[0];
    for(int i=0;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }

    return maxProfit;
}

int main(){
    vector <int> arr = {7,1,5,3,6,4};
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Array Size: "<<arr.size();
    cout<<endl;
    cout<<"Maximum Profit: "<< bestBuy(arr);
    cout<<endl;
    return 0;
}