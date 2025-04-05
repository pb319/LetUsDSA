// Write a programme to print the sum of digits of a given number


#include<iostream>
using namespace std;

int digisum(int num)
{
    int sum = 0;
    while (num >0)
    {
        sum += num%10;
        num /= 10; 
    }
    cout<<sum<<endl;
    return sum;
}

int main()
{
    
    digisum(123);

    return 0;

}