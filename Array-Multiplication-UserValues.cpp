//Array-Multiplication-UserValues.cpp
#include<iostream>
using namespace std;
int main()
{
    int multi=1;

    int size;
    cout<<"Enter Size OF Array: ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<<i<< "Index Value: ";
        cin>>arr[i];
    }
    cout<<endl<<"Printing Array: "<<endl;
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size;i++)
    {
        multi=multi*arr[i];
    }
    cout<<endl<<"Multiplication of all Array Elements are: "<<multi;
}