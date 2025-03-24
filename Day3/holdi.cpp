//Write a Programme to print the following Hollow Diagram
//      * 
//    *   *
//  *       *
//    *   *
//      * 



#include<iostream>
using namespace std;

int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>0;j--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=2*i -1; j>0;j--)
        {
            cout<<" ";
        }
        if(i!=0)
        {
            cout<<"*";
        }
        
        cout<<"\n";

    }
    
    return 0;
}