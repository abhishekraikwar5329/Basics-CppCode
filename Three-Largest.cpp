//Three-Largest.cpp
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter A";
    cin>>a;

    cout<<"Enter B";
    cin>>b;

    cout<<"Enter C";
    cin>>c;

    if (a >= b) {
        if (a >= c)
            cout<<a<<"Is Largestt";
        else
            cout<<c<<"Is Largestt";
    }
    else {
        if (b >= c)
            cout<<b<<"Is Largestt";
        else
            cout<<c<<"Is Largestt";
    }

    return 0;
}