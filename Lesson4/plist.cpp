// For a given N, write a programme to print all the prime numbers from 2 to N

#include<iostream>
using namespace std;

void primeList(int N)
{
     
    for(int i=2; i<= N;i++)
    {
        int check = 1;
            for(int j=1;j<i-1;j++)
        {


            if (i % (j+1) == 0)
            {   
                check = 0;
                break;
            }
            
        }
    if (check!=0)
    {
        cout<<i<<endl;
    }
     

    }
}


int main()
{
    primeList(44);
    return 0;
}