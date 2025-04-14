//Write a programme to carryout linear search in Vectors
#include<iostream>
#include<vector>
using namespace std;

void linearVecor( vector <int> vec, int target){


    for(int i=0;i<vec.size();i++){
        if (vec[i] == target){
            cout<<"Idx: "<< i<<"\n";
            return;
        }
    }
    cout<<"Not Found\n";
    return;
}

int main(){

    vector <int> vec = {1,5,6,7};
    linearVecor(vec,7);
    linearVecor(vec,9);
    return 0;
}