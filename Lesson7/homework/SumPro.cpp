//Write a programme to fin the sum and product of array elements
#include<iostream>
using namespace std;

int sumArray(int arr[],int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}

int mulArray(int arr[],int size)
{
    int mul = 1;
    for (int i = 0; i < size; i++)
    {
        mul *= arr[i];
    }
    return mul;
    
}

int main()
{
    int arr[]={1,5,2,7};
    cout<<"Sum of the elements: "<<sumArray(arr,4)<<"\n";
    cout<<"Product of the elements: "<<mulArray(arr,4)<<"\n";
    return 0;
}