#include<iostream>
using namespace std;

int nSum(int n)
{
    int sum = 0;
    for (int i=0; i<=n;i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    cout<<"The Sum :"<<nSum(10)<<"\n";
    return 0;
}