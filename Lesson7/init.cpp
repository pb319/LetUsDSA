// Write a programme to initialize arrays

#include<iostream>
using namespace std;

int main()
{

    int item_id[5] = {020,112,458,65}; // 5 Avaliable but 4 filled till now
    double item_price[] = {12.5,147.0,265.0,75.0};

    for(int i = 0; i<5;i++)
    {
        cout<<item_id[i]<<endl;
    }
    return 0;
}