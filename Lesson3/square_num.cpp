// Write a code where each line will not repeat numbers rather count will go on
#include<iostream>
using namespace std;

int main()
{
    int line = 3;
    int ch = 1;
    for (int i = 0; i<line; i++ )
    {
        for (int j = 0; j < line; j++)
        {
            cout<<ch;
            ch+=1;
        }
        cout<<"\n";
        
    }
}
