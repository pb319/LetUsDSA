//There are N books, each ith book has A[i] number of pages
// You have to allocate books to M number of students so that the maximum number of pages 
// allocated to student is minimum.

#include <iostream>
#include <vector>
#include<limits>
using namespace std;

bool isValid(vector <int> arr, int n, int m, int maxAllowedPages){
    int stud = 0, count =1;
    for(int i = 0; i<n ;i ++){

        if (arr[i] > maxAllowedPages){
            return false;
        }
        else if (stud + arr[i] <maxAllowedPages)
        {
            stud += arr[i];
        }
        else{
            stud = arr[i];
            count++;
        }
         
    }
    if (count==m){
        return true;
    }else{
        return false;
    }
    
}

int bookAllocation(vector <int> arr, int n, int m){
    if(n>m){
        return -1;
    }

    int sum= 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int st = 1, en = sum;
    int mid;
    int ans = -1;
    while (st<=en)
    {
        if (st==en){
        return ans;
        }
        mid = st + (en-st)/2;
        if(isValid(arr, arr.size(), m, mid )){
            ans = mid;
            en = mid-1;
        }
        else{
            st = mid+1;
        }
    } 
    

    return ans;
}

int main(){
    vector <int> arr = {2,1,3,4};
    int n = 4, m = 2;
    cout<<"Given Array: "<<endl;
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Max Book Allocation: "<<endl;
    cout<<bookAllocation(arr,n,m)<<endl;

    
    return 0;
}

