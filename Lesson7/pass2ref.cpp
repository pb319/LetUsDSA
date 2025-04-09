//Write a code to observe the difference between "Pass by Value" and "Pass by Reference"

#include<iostream>
using namespace std;

void changeVar(int x)  
{
    x += 14;
    return;
}

int main()
{   
    int x = 5;
    changeVar(x); // Pass by Value
    cout<<x<<endl; // no change in x
    return 0;
}