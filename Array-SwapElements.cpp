//Array-SwapElements.cpp
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int temp=0;
    int n=5;
    for(int i=0; i<n-1;i=i+2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}