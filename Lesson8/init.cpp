// Write a programme to initialize vectors
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector <int> vec1; //initializing a vector nammed "vec". By deafult has zero element.
    vector <int> vec2 = {1,2,3};
    vector <int> vec3(3,7); //vector with 3 elements all being 7

    cout<<"Next Vector: "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<vec2[i]<<endl;
    }

    cout<<"Next Vector: "<<endl;
    // for each loop
    for(int i: vec3)  // synax
    {
        cout<<i<<endl;
    }

    return 0;
}