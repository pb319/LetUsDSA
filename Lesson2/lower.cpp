// Write a code to check whether a given input is lower-case or upper-case

#include <iostream>
using namespace std;

int main(){
    char input;
    // int convert;

    cout<<"Enter an Character: \n";
    cin >> input;
    // convert = input;

    if (input < 'A' || input > 'z')
    {
        cout << "Wrong Input! Neither Lowercase nor Uppercase!\n";
    }
    else if (input>='A' && input <='B')
    {
        cout<<"Uppercase!\n";
    }else
    {
        cout<<"Lowercase!\n";
    }
    

    return 0;
}