//write a programme to reverse an array (without making another array)

#include<iostream>
using namespace std;

void revArray(int arr[],int size)
{
    int box;
    for(int i=0;i<=size/2;i++)
    {
        box = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = box;
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
    revArray(arr,4);
    printArr(arr,4);

    return 0;
}