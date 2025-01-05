#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an Integer!\n";
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        for (int j =1 ; j<= num; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}