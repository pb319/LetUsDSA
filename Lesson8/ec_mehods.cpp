// Write a programme to depict usage of various mehods wihin vectors
//size, push_back, pop_back, front, back, at
#include<iostream>
#include<vector>
using namespace std;


int main()
{
vector <int> vec;

//size of the vector
cout<<vec.size()<<endl;

//inserting elements from end
int count;
cout<<"How many numbers you want to insert??: "<<endl;
cin>>count;

cout<<"Enter your integers: "<<endl;
for(int i=0;i<count;i++)
{
    int num;
    cin>>num;
    vec.push_back(num);
}

// vec.push_back(1);
// vec.push_back(3);
// vec.push_back(5);

cout<<"Let's see what you have: "<<endl;
for(int val: vec)
{
    cout<<val<<"\n";
    
}
cout<<"Size: "<<vec.size()<<endl;

//Accessign Element at a specific index 
 cout<< "Element at 2nd Place: "<<vec.at(1)<< " ";


return 0;
}

