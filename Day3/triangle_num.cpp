#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)  // Decides How many times prints
        {
            cout<<i+1;
        }
        cout<<"\n";           // Line Changes after each outer loop
    }
    return 0;
}