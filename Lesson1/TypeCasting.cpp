#include <iostream>
using namespace std;

int main(){
    // small to big datatype conversion (implicit conversion)
    char grade = 'A' ;
    int value = grade ;
    cout<< grade <<" Converted Into "<< value << endl ;

    //big to small typecasting (explicit conversion)
    double price = 135.66 ; 
    int newPrice = (int)price;
    cout<< price <<" Converted Into "<< newPrice << endl ;
    return 0;
}