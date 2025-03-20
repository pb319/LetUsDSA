#include<iostream>
using namespace std;

int main()
{
    int line= 4;
    for(int i=0;i<line;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;

}