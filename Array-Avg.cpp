//Array-Avg.cpp
#include <iostream>
using namespace std;
void printArr(int arr[], int size);
void printArr(int arr[], int size)
{
    cout<<endl<<"Printing Array: "<<endl;
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter Size OF Array: ";
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<<i<< "Index Value: ";
        cin>>arr[i];
    }
    printArr(arr,size);
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    int avg=sum/size;
    cout<<"Average of Array Elements are: "<<avg;
    
    
}