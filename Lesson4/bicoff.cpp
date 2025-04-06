// Write a Programme to calculate the binomial coefficient(nCr) for a given n and r

#include<iostream>
using namespace std;

int fac(int num)
{   
    float mul = 1;
    for(int i=0;i<num;i++)
    {
        mul *= i+1;
    }
    return mul;
}

int binCoff(int n, int r)
{
    float coff = 1;
    for(int i = 0; i<r; i++)
    {
        coff *= n;
        n--;
    }
    return coff/fac(r);
}

int main()
{
    cout<<binCoff(5,3)<<endl;
    return 0;
}