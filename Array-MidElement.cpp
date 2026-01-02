//Array-MidElement.cpp
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,1,6};
    int count=0;
    for(int i=0;i<6;i++)
    {
        count++;
    }
    int mid=count/2;
    cout<<"Mid Element of Array IS : "<<arr[mid]<<endl;;
}