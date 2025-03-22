// write a code for the following pattern
//    1
//   121
//  12321
// 1234321


#include<iostream>
using namespace std;

int main()
{
    int line = 5;
    int count = (1 + (line-1)*2);

    for(int i=0;i<line;i++)
    {
        for(int j=line-i;j>1;j--)
        {
            cout<<" ";
        }

        for(int k=0;k<=i;k++)
        {
            cout<<k+1;
        }

        for(int k=0;k<i;k++)
        {
            cout<<k+1;
        }
        
        cout<<"\n";

    }
    return 0;
}