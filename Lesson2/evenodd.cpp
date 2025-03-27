#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an Integer!" << "\n";
    cin >> num;

    if (num % 2 == 0){
        cout << "It is an even number\n";
    }else{
        cout << "Not an Even Number!";
    }

    return 0;
}