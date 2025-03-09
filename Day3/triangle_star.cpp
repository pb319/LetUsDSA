#include<iostream>
using namespace std;

int main()
{   
    int line = 4;
    for(int i=0;i<line;i++)
    {          
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}