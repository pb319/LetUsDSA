//Write a function to print all unique values in an array
#include<iostream>
using namespace std;

void printUnique(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int check = 0;
        for(int j=0;j<size;j++)
        {
            if (arr[i]==arr[j] & i!= j){
                // cout<<"Problem: "<<i<<" ";
                check = 1;
                break;
            }
        }
        if(check==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return;
}



int main()
{

    int arr1[] = {1,2,1,2,5};
    int size1 = 5;
    int arr2[] = {1,2,5};
    int size2 = 3;

    printUnique(arr1,size1);
    printUnique(arr2,size2);
    return 0;
}