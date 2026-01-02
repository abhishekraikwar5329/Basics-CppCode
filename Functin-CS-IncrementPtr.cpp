//Functin-CS-IncrementPtr.cpp
#include <iostream>
using namespace std;
int  increment(int &num);
int  increment(int &num)
{
    num=num+10;
    return num;
}
int main() {
	int num;
    cout<<"Enter Number to Increment: ";
    cin>>num;

    cout<<"Before Increment num: "<<num<<endl<<endl;
    increment(num);

    cout<<"After Increment num: "<<num;
	
}