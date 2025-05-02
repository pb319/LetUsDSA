//Write a programme to merge to given(ascending) sorted arrays in another sorted array
#include<iostream>
#include<vector>
using namespace std;

vector <int> merge2arr(vector <int> &nums1, vector <int> &nums2){
    int n1 = nums1.size(), n2 = nums2.size();
    int tr1 = n1, tr2 = n2; 
    vector <int> ans;
    for(int i=0; i<n1;i++){
        for(int j=0;j<n2;j++){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                tr1 = i ;
            }else{
                ans.push_back(nums2[j]);
                tr2 = j ;
            }
            if (tr1 == n1-1 || tr2 == n2-1){
                break;
            }
        }

        if (tr1 == n1-1 || tr2 == n2-1){
                break;
            }
    }

    int rest;
    if (tr1 == n1-1){
        rest = tr2;
        for (int i =rest; i<n2; i++){
            ans.push_back(nums2[i]);
        }
    }else{
        rest = tr1;
        for (int i =rest; i<n1; i++){
            ans.push_back(nums1[i]);
        }
    }
    
    return ans;
}

int main(){
    
    return 0;
}