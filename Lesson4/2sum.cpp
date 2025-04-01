#include<iostream>
using namespace std;

int sum2Num(int num1, int num2)
{
    int sum =  num1 + num2;
    cout<< sum<<"\n";
    return sum;
}


int main()
{
    int add = sum2Num(2,7);
    cout<<add<<endl;
    return 0; 
}