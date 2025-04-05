#include<iostream>
using namespace std;


void fun()
{
    int x = 2;
    cout<<"It's Working\n";
    return ; // return control only
}


int main()
{
    fun();
   // cout<< x; --> It will not work since out of scope
    return 0;
}