// Write a program to find the maximum water in the container (Optimized)
// container = {1,8,6,2,5,4,8,3,7}

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int optContainer(vector<int> cont){
    int ans = INT_MIN;
    int p1 = 0, p2 = cont.size()-1;
    while (p1<p2)
    {
        int width = p2-p1;
        int height = min(cont[p1],cont[p2]);
        ans = max(ans, width * height);
        if(p1>p2){
            p2--;
        }else{
            p1++;
        }
    }
    return ans;
    
}

int main(){
    vector <int> cont ={1,8,6,2,5,4,8,3,7};
    cout<<"Container with Most Water: "<<optContainer(cont)<<endl;
    return 0;
}