//Array-PosNegzero.cpp
#include<iostream>
using namespace std;
void checkArray(int arr[], int size);
void checkArray(int arr[], int size)
{
    int zeroCount=0;
    int posCount=0;
    int negCount=0;
    for(int i=0; i<size;i++)
    {
        if(arr[i]==0)
            zeroCount++;
        else if(arr[i]>0)
            posCount++;
        else if(arr[i]<0)
            negCount++;
    }
    cout<<"Total Number of Zero NUmbers in an array are"<<zeroCount<<endl;
    cout<<"Total Number of Positive NUmbers in an array are"<<posCount<<endl;
    cout<<"Total Number of Negative NUmbers in an array are"<<negCount;
    
}
int main()
{
    int arr[]={0,-1,3,8,-4};
    checkArray(arr,5);
}