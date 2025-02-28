#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout<<"Enter an Integer: \n";
    cin>>n;

    for (int i = 2; i< n; i++)
    {
        if (n%i ==0)
        {
            isPrime = false;
            break;
        }

    }

    if (isPrime)
    {
        cout<<"Prime Number :) \n";
    }else
    {
        cout<<"Not a Prime Number :( \n";
    }

    return 0;
}