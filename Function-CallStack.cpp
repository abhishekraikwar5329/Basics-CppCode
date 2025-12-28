//Function-CallStack.cpp
#include<iostream>
using namespace std;
void show()
{
    int a=20;
    cout<<"Value OF a: in Show Fn: "<<a<<endl;
}
int main()
{
    int a=10;
    cout<<"Value OF a: in Main Fn: "<<a<<endl;

    show();

    cout<<"Value OF a: again in Main Fn After Calling SHOW(): "<<a<<endl;
}