//Write a programme to swap the maximum and minimum elements of an array
#include<iostream>
#include<climits>
using namespace std;

//Printing an Array
void printArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Fucntion to find Max_Idx
int minIdx(int arr[],int size)
{
    int idx = 0;
    int min = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if (arr[i]< min)
        {
            // cout<<"Index: "<<i<< endl;
            min = arr[i];
            // cout<<"Min: "<<min<< endl;
            idx = i;
        }
    }
    // cout<<"Index: "<<idx<< endl;
    return idx;
}

//Function to find Min_Idx
int maxIdx(int arr[],int size)
{
    int idx = 0;
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if (arr[i]> max)
        {
            
            max = arr[i];
            // cout<<"Max: "<<max<< endl;
            idx = i;
        }
    }
    // cout<<"Index: "<<idx<< endl;
    return idx;
}

//Required Swaping Function
void minmaxSwap(int arr[],int size)
{
    int idxMin, idxMax;
    idxMin = minIdx(arr,size);
    idxMax = maxIdx(arr,size);
    // cout<<idxMax<<" "<<idxMin<<" "<<endl;
    swap(arr[idxMin],arr[idxMax]);
}


int main()
{

    int garr[] = {9,1,5,7,-2};
    int size = 5;
    minmaxSwap(garr,size);
    printArr(garr,size);
    return 0;

}