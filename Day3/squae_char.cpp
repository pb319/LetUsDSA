#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    
    for (int j = 0; j < n; j++)
    {
        char start = 65;
            for (int i = 0; i < n; i++)
        {   
            cout<<start;
            start = start + 1 ;

        }
        cout<<endl;
    }
    
    
    
    return 0;

}