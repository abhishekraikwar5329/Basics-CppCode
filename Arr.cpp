//Arr.cpp
#include<iostream>
using namespace std;
int main(){
    int n, count=0,rem,pow=1,sum=0;
    cout<<"Ener Number: ";
    cin>>n;
    for(int i=n;i>0;i=i/10)
    {
        count++;
    }

    for(int i=n;i>0;i=i/10)
    {
        rem=i%10;
        for(int j=1;j<=count;j++)
        {
            pow=pow*rem;
        }
        sum=sum+pow;
        pow=1;
    }
    if(sum==n)
        cout<<"Armstrong";
    else
        cout<<"No-Armstrong";
}