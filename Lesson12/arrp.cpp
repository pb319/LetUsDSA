// Write a programme to demonstrate different feature of an array pointer
#include<iostream>
using namespace std;

int main(){
    int var = 25;
    int arr[] = {5,7,9};
    cout <<"[ ";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<' ';
    }
    cout <<"]";
    cout<<endl;
    cout<<"Address of Array: "<< &arr << endl;
    cout<<"Element at Address: "<< *(arr) << endl;

    // arr = &(var); //int* arr is a constant poniter and hence its value can't be changed
    return 0;
}