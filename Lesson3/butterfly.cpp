// Write a Programme to print the following
// n = 4
// *      *
// **    **
// ***  ***    
// ********
// ***  ***
// **    **
// *      *



#include<iostream>
using namespace std;

int main()
{
    int line = 4;
    for(int i=0; i<line;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }

        for(int j=line-i-1;j>0;j--)
        {
            cout<<" ";
        }

        for(int j=line-i-1;j>0;j--)
        {
            cout<<" ";
        }

        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }

        
        cout<<endl;
    }


    for(int i=0; i<line-1;i++)
    {
        

        for(int j=line-i-1;j>0;j--)
        {
            cout<<"*";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }

        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }

        for(int j=line-i-1;j>0;j--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }



    
    return 0;
}