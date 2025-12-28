//Array-LinearSearch.cpp
#include<iostream>
using namespace std;
int linearSearch(int arr[], int target, int size);
int linearSearch(int arr[], int target,int size)
{
    for(int i=0; i<size;i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}
int main()
{
    int arr[5]={3,4,6,7,8};
    int target;
    cout<<"Enter Target";
    cin>>target;


    int index=linearSearch(arr, target,5);
    if(index!=-1)
        cout<<"Target Found at: "<<index;
    else
        cout<<"Element Not Found";
}