// Write a programme to take input from an user and print the array

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements :"<<endl;
    cin>>n;
    int marks[n];
    
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }

    cout<<"Here is your elements: "<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<endl;
    }

    return 0;

}