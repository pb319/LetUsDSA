// Write a programme to search single element in a repeating sorte array
// arr1 = [1,1,2,2,3,4,4]
// arr1 = [1,1,2,2,3,3,4,5,5]
#include<iostream>
#include<vector>
using namespace std;

int bruteSingle(vector <int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]!= arr[i+1]){
                return i;
            }
        }
        else if(i==n-1){
            if(arr[i-1]!= arr[i]);
        }
        else{
            if(arr[i-1]!= arr[i] & arr[i]!= arr[i+1]){
                return i;
            }
        }
    }
    return -1;
}

int twopSingle(vector <int> arr){
    int st = 0, en = arr.size();
    int mid;
    // int count=1;
    while(st<=en){
        mid = st + (en-st)/2;
        // cout<<"Step: "<<count<<endl;

        if(mid%2==0){
            // cout<<"Inside 1"<<endl;
            if(arr[mid-1]==arr[mid]){
                // cout<<"Inside 1.1"<<endl;
                en = mid-1;
            }
            else{
                // cout<<"Inside 1.2"<<endl;
                st = mid+1;
            }
        }else{
            // cout<<"Inside 2"<<endl;
            if(arr[mid-1]==arr[mid]){
                // cout<<"Inside 2.1"<<endl;
                st = mid+1;
            }
            else{
                // cout<<"Inside 2.2"<<endl;
                en = mid-1;
            }

        }
        // cout<<"Start: "<<st<<endl;
        // cout<<"End: "<<en<<endl;

        if(st==en){
            return st;
        }
        // count++;

    }
    return -1;
}


int main(){
    vector <int> arr1 = {1,1,2,2,3,4,4};
    cout<<"Given Array1: "<<endl;
    for(int val:arr1){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Bruteforce Single Element: "<<bruteSingle(arr1)<<endl;
    cout<<"Bruteforce Single Element: "<<twopSingle(arr1)<<endl;
    cout<<endl;

    vector <int> arr2 = {1,1,2,2,3,3,4,5,5};
    cout<<"Given Array2: "<<endl;
    for(int val:arr2){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Bruteforce Single Element: "<<bruteSingle(arr2)<<endl;
    cout<<"Bruteforce Single Element: "<<twopSingle(arr2)<<endl;
    return 0;
}