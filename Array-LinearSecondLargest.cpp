//Array-LinearSecondLargest.cpp
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int large=arr[0];
    int second=arr[0];

    for(int i=0;i<8;i++)
    {
        if(arr[i]>large)
        {
            second=large;
            large=arr[i];
        }
    }
    cout<<"First Largest Number is : "<<large;
    cout<<"Second Largest Number is : "<<second;
}