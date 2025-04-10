//Write a programme to print the common element of two given array
#include<iostream>
using namespace std;

// Unique Element Maker Function
void repeatZero(int arr1[], int size1)
{
    for(int i=0;i<size1;i++)
    {
        for(int j=0;(j<size1) & (i !=j) ;j++)
        {
            if(arr1[i] == arr1[j] & (arr1[i]!=0))
            {
                arr1[j]=0;
            }
        }
    }
    return;
}


//Function to print Common-Element(s)
void commonElement(int arr1[], int size1, int arr2[], int size2)
{
    repeatZero(arr1, size1);
    repeatZero(arr2, size2);
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if((arr1[i] == arr2[j]) & (arr1[i]!=0))
            {
                cout<<arr1[i]<<" ";
            }
        }
    }
    cout<<endl;

    return;

}



int main()
{
    int arr1[] = {1,2,5,7,7,7,9};
    int size1 = 7;
    int arr2[] = {1,9,9,11,7,13};
    int size2 = 6;

    commonElement(arr1, size1, arr2, size2);
    return 0;
}