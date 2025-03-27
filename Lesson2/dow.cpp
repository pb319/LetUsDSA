#include<iostream>
using namespace std;

int main()
{
    int count, sum = 0, i= 1;
    cout<<"Enter an Integer\n";
    cin>>count;
    do
    {
        sum += i;
        i++;
    } while (i<=count);
    

    return 0;

}