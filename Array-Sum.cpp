//Array-Sum.cpp
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[5]={1,2,3,6,5};
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}