//Function-CS-SwapPtr.cpp
#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"Value OF a: in Show Fn: "<<a<<endl;
    cout<<"Value OF a: in Show Fn: "<<b<<endl;
}
int main()
{
    cout<<"BEFORE SWAPPING: "<<endl;
    int a=10;
    cout<<"Value OF a: in Main Fn: "<<a<<endl;
    int b=20;
    cout<<"Value OF b: in Main Fn: "<<b<<endl;

    cout<<"FUNCTION CALLING SWAPPING: "<<endl;
    swap(a,b);

    cout<<"AFTER SWAPPING: IN MAIN FN: "<<endl;
    cout<<"Value OF a: in Main Fn: "<<a<<endl;
    cout<<"Value OF a: in Main Fn: "<<b<<endl;
}