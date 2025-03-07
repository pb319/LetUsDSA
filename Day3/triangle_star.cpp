#include<iostream>
using namespace std;

int main()
{   
    int line = 4;
    int num = 1;
    for(int i=0;i<line;i++)
    {   
        
        for(int j=0;j<num;j++)
        {
            cout<<"*^";
        }
        cout<<"\n";
        num ++ ;
    }
    return 0;
}