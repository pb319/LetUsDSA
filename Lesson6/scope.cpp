// Write a programme to varify the local and global scope of a variable

#include<iostream>
using namespace std;

 int glob = 1256;

int checkFunc(int x1)
{
    char y1 = glob;
    return x1, y1 ; 
}

int main()
{
    if (1)
    {
        int x2 = 1;
        cout<< "Within if: " << glob<< "\n"; 
    }

    for(int i =0 ; i<1; i++)
    {
        int j = 26;
        cout<< "Within Loop: " << glob<< "\n";
        
    }

    {
        //block of code
        int check = 11;
        cout<< "Within if: " << glob<< "\n";

    }

    // cout<<x1<<endl;     */
    // cout<<x2<<endl;          LOCAL
    // cout<<y1<<endl;          SCOPE
    // cout<<check<<endl;   /*

    cout<< "Within main: " << glob<< "\n"; // global scope

    return 0;
}