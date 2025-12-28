//Array-OddElements.cpp
#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int arr[5]={1,2,3,4,5};
    for(int i=0; i<5;i++)
    {
        if(arr[i]%2!=0){
            count++;
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl<<"Total Odd Numbers in an Array are: "<<count;
}