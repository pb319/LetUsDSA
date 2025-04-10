// Write a Programme to perform LINEAR SEARCH

#include<iostream>
using namespace std;

// funtion to perform linear search
int linSearch(int arr[],int size, int target)
{

    for(int i=0;i<size;i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }

    return -1;
}


int main()
{

int arr1[] = {1,5,7};
int arr2[] = {1,2,7};
cout<<"Index: "<<linSearch(arr1,3,7)<<endl;
cout<<"Index: "<<linSearch(arr2,3,5)<<endl;

}