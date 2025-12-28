//Double-Pointer.cpp
#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int *p=&a;
    int **pt=&p;
    cout<<"Value of A: "<<a<<endl;
    cout<<"Address of A: "<<p<<endl;
    

    cout<<"Value of P: "<<p<<endl;
    cout<<"Address of P: "<<&p<<endl;
    
    cout<<"Value of pt: "<<pt<<endl;
    cout<<"Address of pt: "<<&pt<<endl;

    cout<<"Derefrencing P and Value of A is: "<<*p<<endl;
    cout<<"Derefrencing Pt and Value of p is(Address of A): "<<*pt<<endl;
    cout<<"Derefrencing Pt and Value of A is: "<<**pt<<endl;
    
}