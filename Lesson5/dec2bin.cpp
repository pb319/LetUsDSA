//Write a programme to conver a decimal number into binary number

#include<iostream>
using namespace std;

void d2b(int n)
{
    int div = 2;
    int r,ans =0;
    int count = 0;
    int pow = 1;
    while(n>0)
    {   
        r = n%2;
        n /= 2; 
        ans = ans + pow*r;
        pow *= 10;

    }
    cout<<ans<<endl;
    return ;
}

int main()
{
    d2b(10);
    return 0;
}