// Write a program to check if a voter is eligible to vote

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18){
        cout << "You are eligible to vote!";
    }else{
        cout << "You are not eligible to vote!";
    }


}