//Write a Function to check if a number is Prime
#include<iostream>
using namespace std;

void checkPrime(int num)
{
    for(int i=1;i<num-1;i++)
    {


        if (num % (i+1) == 0)
        {
            cout<<"Not a Prime\n";
            return;
        }
        
    }

    cout<<"Prime\n";
    return;
    
}


int main()
{
    checkPrime(2);
    checkPrime(22);
    checkPrime(32);
    return 0;
}