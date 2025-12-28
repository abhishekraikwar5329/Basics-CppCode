//Function-CS-Swap.cpp
#include<iostream>
using namespace std;
void swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"Value OF a: in Show Fn: "<<a<<endl;
    cout<<"Value OF b: in Show Fn: "<<b<<endl;
}
int main()
{
    int a=10;
    cout<<"Value OF a: in Main Fn: "<<a<<endl;
    int b=20;
    cout<<"Value OF b: in Main Fn: "<<b<<endl;

    swap(a,b);

    cout<<"Value OF a: in Main Fn After Swapping: "<<a<<endl;
    cout<<"Value OF b: in Main Fn After Swapping: "<<b<<endl;

}