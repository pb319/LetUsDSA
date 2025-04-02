// Write a programme to print the minimum of two Numbers

#include<iostream>
using namespace std;

int findMin(int x1, int x2)
{
    if (x1>x2)
    {
        return x2;
    } else
    {
        return x1;
    }
}

int main()
{
    cout<<findMin(7,9)<<"\n";
    return 0;
}


