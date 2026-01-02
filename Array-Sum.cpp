//Array-Sum.cpp
#include<iostream>
using namespace std;
int sumArray(int arr[], int size);
int sumArray(int arr[], int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int sum=0;
    int arr[5]={1,2,3,6,5};
    // for(int i=0;i<5;i++)
    // {
    //     sum=sum+arr[i];
    // }
    // cout<<sum;
    cout<<sumArray(arr, 5);
}