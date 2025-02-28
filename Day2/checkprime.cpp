#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an Integer!\n";
    cin>> n;

    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            cout<<"Not a Prime Number!!\n";
            return 0;
        }
        

    }
    
    cout<<"It is a Prime Number!!\n";
    return 0;
}