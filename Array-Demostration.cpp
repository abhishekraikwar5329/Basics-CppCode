//Array-Demostration.cpp
#include <iostream>
using namespace std;
int main()
{
    int arr[]={86,2,3,4,5};
    cout<<"Array ka Address: "<<arr;
    cout<<endl<<endl<<"Because array ka naam khudme ek address hota hai aur vo address store krta hai First index se..."<<endl;

    cout<<endl<<"Value Of 0th Index: (Using Derefrencing )  "<<*arr<<endl;

    cout<<"Printing Using For Loop"<<endl;
    for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Printing Using While Loop"<<endl;
    int i=0;
    while(i<5)
    {
        cout<<arr[i]<<" ";
        i++;
    }
}
