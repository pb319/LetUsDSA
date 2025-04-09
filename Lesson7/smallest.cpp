//Write a programme to find the smallest element of a given array
#include<iostream>
#include<climits>
using namespace std;

// int arrCreate()
// {
//     int n;
//     cout<<"Enter number of elements :"<<endl;
//     cin>>n;
//     int marks[n];
    
//     cout<<"Enter elements :"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>marks[i];
//     }
//     return marks;
// }


int main()
{

    int n;
    cout<<"Enter number of elements :"<<endl;
    cin>>n;
    int marks[n];
    int sidx,midx;
    
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }


    // int sm = marks[0],lr = marks[0];
    int sm = INT_MAX;
    int lr = INT_MIN;


    for(int i=0;i<n;i++)
    {
        if(marks[i]<sm)
        {
            sm = marks[i];
            sidx = i;
        }

        if(marks[i]>lr)
        {
            lr=marks[i];
            midx =i;
        }

    }
    cout<<"Smalest Elemnet: "<<sm<<endl;
    cout<<"Index: "<<sidx<<"\n";
    cout<<"Lmalest Elemnet: "<<lr<<endl;
    cout<<"Index: "<<midx<<"\n";
    return 0;
}