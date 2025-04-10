//TWO-POINTER APPROACH
//Write a programme to performe reverse operation on an given array with 2 pointer approach
#include<iostream>
using namespace std;

void rev2Array(int arr[],int size)
{
    int st,en; // declaring starting and ending pointer
    st = 0;
    en = size-1;
    while(st <= en)
    {
        swap(arr[st],arr[en]);  //in-built swap function available in C++ 
        st++, en--;
    }

    return;
}

void printArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,7,5,9};
    int size = 4;
    printArr(arr, 4);
    rev2Array(arr,4);
    printArr(arr,4);

    return 0;
}