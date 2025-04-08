//Write a Programme to convert binary into decimal
#include<iostream>
using namespace std;

int bin2dec(int binNum)
{
    int ans = 0, pow = 1;
    while(binNum>0)
    {   
        int dig = binNum%10; 
        // cout<<"dig :"<<dig<<"\n";
        // cout<<"power :"<<pow<<"\n";
        binNum = (binNum - dig)/10;
        ans += (dig * pow);
        // cout<<"ans :"<<ans<<"\n";
        
        pow *= 2;
        
    }

    
    return ans;

}


int main()
{
    cout<<bin2dec(110010)<<endl;
    cout<<bin2dec(1010)<<"\n";
}
