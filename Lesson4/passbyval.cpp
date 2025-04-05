#include<iostream>
using namespace std;

int sum2(int a, int b)
{
    a += 3;
    b += 2;
    return (a+b);
}


int main()
{
    int a,b;
    a = 5;
    b = 4;

    cout<< "Sum of "<<a<<" and "<<b<<": "<<sum2(a,b);
    return 0;

}