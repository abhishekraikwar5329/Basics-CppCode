//Pointer.cpp
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<"Value of A: "<<a<<endl;
    cout<<"Address of A: "<<p<<endl;

    cout<<"Value of P: "<<p<<endl;
    cout<<"Address of P: "<<&p<<endl;
    
    cout<<"Derefrencing P and Value of A is: "<<*p<<endl;
    
    
}