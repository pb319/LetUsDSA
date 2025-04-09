//Write a code to observe the difference between "Pass by Value" and "Pass by Reference"

#include<iostream>
using namespace std;

void changeVar(int x)  
{
    x += 14;
    return;
}

void changeArr(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 2;
    } 
    
}

int main()
{   
    int x = 5;
    int arr[]={1,2,3};

    // Pass by Value
    changeVar(x); 
    cout<<x<<endl; // no change in x
    
    // Pass by Reference
    cout<<"Before function call: "<<"\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    changeArr(arr,3); // array changed in main() scope as well
    cout<<"After function call: "<<"\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}