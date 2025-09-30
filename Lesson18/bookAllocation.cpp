//There are N books, each ith book has A[i] number of pages
// You have to allocate books to M number of students so that the maximum number of pages 
// allocated to student is minimum.

#include <iostream>
#include <vector>
#include<limits>
using namespace std;

bool isValid(vector <int> arr, int n, int m, int mid){
    int stud = 0, count =1;
    for(int i = 0; i<n ;i ++){

        if (arr[i] > mid){
            return false;
        }
        else if (stud<mid)
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
    int st = arr[0], en = arr[n-1];
    int mid;
    int ans;
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
    

    return -1;
}

int main(){
    vector <int> arr = {2,1,3,4};
    cout<<"Given Array: "<<endl;
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;

    
    return 0;
}

