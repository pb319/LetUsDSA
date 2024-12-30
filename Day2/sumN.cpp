#include <iostream>
using namespace std;

int main(){
    int n,sum= 0,i;
    cout<<"Enter an Integer!\n";
    cin>>n;
    for(i=1;i<=n;i++){
        sum += n;
    }
    cout<<"The Sum of First "<<n<<" Integers: "<<sum<<endl;
    return 0;
}