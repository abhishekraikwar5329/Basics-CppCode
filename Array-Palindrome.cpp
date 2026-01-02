//Array-Palindrome.cpp
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,8,3,2,1};
    int n=5;
    for(int i=0; i<5;i++)
    {
        if(arr[i]!=arr[n-1]){
            cout<<"NOT A PALINDROME ARRAY"<<endl;
            return 0;
    }
        while(arr[i]==arr[n-1]){
            cout<<arr[i]<<" and "<<arr[n-1]<<endl;
            n--;
        }
        
    }
    cout<<"ARRRAY PALINDORME HAI>>>"<<endl;
}