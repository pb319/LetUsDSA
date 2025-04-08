//Write a programme to conver a decimal number into binary number

#include<iostream>
using namespace std;

int dec2bin(int decNum)
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
    return ans;
}

int main()
{
    cout<< dec2bin(50)<< "\n" ;
    for(int i=0;i<10;i++)
    {
        cout<<dec2bin(i+1)<<endl;
    }
    return 0;
}