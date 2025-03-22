#include<iostream>
using namespace std;

int main()
{
    int line = 4;
    for(int i=0;i<line;i++)
    {   
        
        if(i+1!=line)
            {
                cout<<" ";
            }
        for(int j=0;j<i;j++)
        {
            
            cout<<j+1;
        }

        cout<<i+1;

        for(int k=i;k>0;k--)
        {
            cout<<k;
        }
        
        // if(i+1!=line)
        //     {
        //         cout<<" ";
        //     }
        cout<<"\n";
    }
    return 0;
}