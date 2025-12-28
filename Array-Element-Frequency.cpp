//Array-Element-Frequency.cpp
#include<iostream>
using namespace std;
int frequencyOf(int size,int target, int arr[]);
int frequnecyOf(int size,int target, int arr[])
{
    int count=0;
    for(int i=0; i<size ; i++)
    {
        if(arr[i]==target)
            count++;
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter Size of an array : "<<endl;
    cin>>size;
    int arr[size];

    for(int i=0; i<size ; i++)
    {
        cout<<"Enter "<< i <<" Indexed Value: "<<endl;
        cin>>arr[i];
    }

    cout<<endl<<"Checking Frequency For Targeted Element: "<<endl;
    int target;
    cout<<"Enter Target: "<<endl;
    cin>>target;

    cout<<"Frequency of Given Target is : "<<frequnecyOf(size,target,arr);
}