//Array-BinarySearch.cpp
#include<iostream>
using namespace std;
int binarySearch(int arr[], int target, int size);
int binarySearch(int arr[], int target,int size)
{
    
        int start=0;
        int end=size-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[mid]==target)
                return mid;
            else if(arr[mid] < target)
                start=mid+1;
            else
                end=mid-1;
        }
        return -1;
}
int main()
{
    int arr[5]={101,203,406,508,1000};
    int target;
    cout<<"Enter Target";
    cin>>target;


    int index=binarySearch(arr, target,5);
    if(index!=-1)
        cout<<"Target Found at: "<<index<<" index";
    else
        cout<<"Element Not Found";
}