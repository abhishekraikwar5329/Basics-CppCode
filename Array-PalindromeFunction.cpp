//Array-PalindromeFunction.cpp
#include<iostream>
using namespace std;
bool checkArrPalindrome(int arr[], int size);
bool checkArrPalindrome(int arr[], int size)
{
    for(int i=0; i<size;i++)
    {
        if(arr[i]!=arr[size-1]){
            return 0;
    }
        while(arr[i]==arr[size-1]){
            cout<<arr[i]<<" and "<<arr[size-1]<<endl;
            size--;
        }
        
    }
    return 1;
}
int main()
{
    int size;
    cout<<"Enter SIze of ARRAY"<<endl;
    cin>>size;
    int arr[size];

    //USER SE LELEO BHAI VALUES
    for(int i=0;i<size;i++)
    {
        cout<<"ENTER VALUE"<<i+1<<endl;
        cin>>arr[i];
    }
    //YOUR ARRAY IS 
    cout<<"YOUR ARRAY IS "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag=checkArrPalindrome(arr,size);
    if(flag==1)
        cout<<"ARRAY IS PALINDORME BHAI"<<endl;
    else
        cout<<"ARRAY IS NOT A PALINDORME BHAI"<<endl;
    
}