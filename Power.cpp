#include <iostream>
using namespace std;
int power(int base, int exponent);
int power(int base, int exponent){

    
    int power = 1;
    for (int i = 1; i <= exponent; i++) {
        power = power * base;
    }
    return power;
}
int main() {
    int base, exponent;

    cout<<"Enter base: ";
    cin>>base;

    cout<<"Enter Exponent: ";
    cin>>exponent;

    cout<<power(base,exponent);
}
