//Write a programme to conver a decimal number into binary number

#include<iostream>
using namespace std;

void dec2bin(int decNum)
{
    int div = 2;
    int r,ans =0, pow = 1;
    while(decNum>0)
    {   
        r = decNum%2;
        decNum /= 2; 
        ans = ans + pow*r;
        pow *= 10;

    }
    cout<<ans<<endl;
    return ;
}

int main()
{
    d2b(50);
    return 0;
}