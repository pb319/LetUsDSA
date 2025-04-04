#include<iostream>
using namespace std;

int nFac(int N)
{
    int mul = 1;
    for(int i=1;i<=N;i++)
    {
        mul *= i;
    }
    return mul;

}


int main()
{
    cout<<"Result :"<<nFac(6)<<endl;
    return 0;
}