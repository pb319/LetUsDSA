//Write a programe to reverse the Vector
#include<iostream>
#include<vector>
using namespace std;

void reVector(vector <int> vec){
    int start = 0, end = (vec.size())-1;
    while(start<end){

        swap(vec[start],vec[end]);
        start++;
        end -- ;
    }

    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
}

void reVectorRef(vector <int> &vec){
    int start = 0, end = (vec.size())-1;
    while(start<end){

        swap(vec[start],vec[end]);
        start++;
        end -- ;
    }

    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> vec = {1,2,3,4,5};
    reVector(vec);


    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;

    reVectorRef(vec);


    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}