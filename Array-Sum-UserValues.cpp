//Array-Sum-UserValues.cpp
#include<iostream>
using namespace std;
int main()
{
    int sum=0;

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
        sum=sum+arr[i];
    }
    cout<<endl<<"sum of all Array Elements are: "<<sum;
}