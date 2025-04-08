// write a programme to check if a number is power of 2 with and without loop

#include<iostream>
using namespace std;

void checkloop2(int num)
{
    int check = 0;
    while(num>1)
    {
        if (num%2 != 0)
        {
            check = 1;
            // cout<<"Num :"<<num<<"\n";
            break;
        }else
        {
            num /= 2;
        }
        
    }
    // cout<<"Check :"<<check<<"\n";
    if (check==1)
    {
        cout<< "Not a power of 2\n";
    }else
    {
        cout<< "A power of 2\n";   
    }
    return;
}

void checkbit2(int num)
{
    
}

int main()
{
    checkloop2(1024);
    checkloop2(72);
}