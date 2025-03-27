#include<iostream>
using namespace std;

int main()
{
    int line=4;
    char l = 'A';
    for(int i=0;i<line;i++)
    {
        
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<line-i;k++)
        {
            cout<<l;
        }
        cout<<"\n";
        l++;
    }
}