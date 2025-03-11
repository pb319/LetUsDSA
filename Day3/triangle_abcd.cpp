#include<iostream>
using namespace std;

int main()
{
    int line = 4;
    char letter = 'A';
    for(int i = 0;i< line;i++)
    {

        // cout<<"Outer Workign";
        for(int j = 0; j<= i;j++)
        {
            // cout<<"Inner Workign";
            cout<<letter;
            // cout<<"It's Working";
        }
        letter++;
        cout<<'\n';
    }
    return 0;

}