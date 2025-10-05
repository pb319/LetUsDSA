// Write  a programme to find minimum time required to paint (coniguously) N boards[Length given in Array] by M Painters. Note Unit Area require Unit Time to be painted.

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector <int> arr,int n, int m, int maxLim){
    int paint=0, count = 1;
    for (int i = 0; i < n; i++){ 
        cout<<"Inside Loop1"<<endl;
        if(arr[i]>maxLim){
            return false;
        }
    }
    
    for(int i =0;i<n;i++){
        cout<<"Inside Loop2"<<endl;
        if(paint+arr[i]<maxLim){
            paint += arr[i];
        }else{
            count++;
            paint=arr[i];
        }
    }
    if(count<=m){
        return true;
    }else false;

    return false;
}

int painterPartition(vector <int> arr,int n, int m){
    int sum =0, max = arr[0];
    for(int i=0;i<n;i++){
        cout<<"Inside Loop3"<<endl;
        if(max<arr[i]){
            max = arr[i];
        }
        sum+=arr[i];
    }
    int st = max, en = sum;
    int mid, ans =-1;
    while(st<=en){
        cout<<"Inside Loop4"<<endl;
        mid = st + (st-en)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            en = mid-1;
        }else st=mid+1;
    }
    return ans;

    return -1;
}


int main(){
    vector <int> arr = {5,7,8,10};
    cout<<"Given Array: "<<endl;
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl<<"Painer's Partition: "<<painterPartition(arr,arr.size(),3)<<endl;
    return 0;
}