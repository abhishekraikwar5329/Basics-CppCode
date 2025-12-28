//Function-CallStack2.cpp
#include<iostream>
using namespace std;
int show()
{
    int a=20;
    cout<<"Value OF a: in Show Fn: "<<a<<endl;
    return a;
}
int main()
{
    int a=10;
    cout<<"Value OF a: in Main Fn: "<<a<<endl;

    a= show();

    cout<<"Value OF a: again in Main Fn After Calling SHOW(): "<<a<<endl;
}