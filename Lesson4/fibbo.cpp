// Write a programme to print fibonacci series for a given N

#include<iostream>
using namespace std;

void fibb(int N)
{
    int termf0 = 0;
    int termf1 = 1;
    int bucket = 0;
    // cout<< termf1 << "\n";
    for (int i = 0 ; i < N; i++)
    {
        cout<<termf0<<"\n";
        bucket = termf0;
        termf0 = termf1;
        termf1 = termf1 + bucket;

    } 
    

    return;
}

int main()
{
    fibb(5);
    return 0; 
}