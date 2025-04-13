//Write a function to demonstrate the Recursion logic behind Vector Creation Using Array
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector <int> vec;

    //Let's visualize the size and capacity
    cout<<vec.size()<<", "<<vec.capacity()<<endl;

    vec.push_back(0);
    //Let's visualize the size and capacity
    cout<<vec.size()<<", "<<vec.capacity()<<endl;

    vec.push_back(1);
    //Let's visualize the size and capacity
    cout<<vec.size()<<", "<<vec.capacity()<<endl;

    vec.push_back(2);
    //Let's visualize the size and capacity
    cout<<vec.size()<<", "<<vec.capacity()<<endl;

    return 0;
}