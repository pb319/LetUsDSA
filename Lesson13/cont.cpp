// Write a program to return the maximum amount of water container can store --> O(n^2)
// container = {1,8,6,2,5,4,8,3,7}
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int bruteCont(vector <int> cont){
    int h1,h2;
    int height,weidth;
    int area = INT_MIN;
    for (int i=0;i<cont.size();i++){
        h1 = cont[i];
        for(int j=i+1;j<cont.size();j++){
            h2 = cont[j];
            weidth = (j-i);
            height = min(h1,h2);
            area = max(area,(height*weidth));
        }
        
    }
    return area;
}

int main(){
    vector <int> cont ={1,8,6,2,5,4,8,3,7};
    cout<<"Container with Most Water: "<<bruteCont(cont)<<endl;
    return 0;
}