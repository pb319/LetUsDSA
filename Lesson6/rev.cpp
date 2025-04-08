//Write a programme to reverse a given number

#include<iostream>
using namespace std;

int revNum(int num)
{   
    int ans = 0;
    while(num>0)
    {
        ans = (ans+(ans%10))*10;
        num /= 10;

    }

    return ans;
}


int main()
{
    cout<<"Reverse :"<<revNum(125);
    return 0;
}