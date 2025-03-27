#include<iostream>
using namespace std;

int main()
{
    int line =4;
    for(int i=0;i<line;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        

        for(int j=i;j<=line;j++)
        {
            cout<<i+1;
        }

        cout<<"\n";
        
    }
    return 0;
}