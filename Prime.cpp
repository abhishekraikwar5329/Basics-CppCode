#include<iostream>
using namespace std;
int prime(int n);
int prime(int n){
    int count=0;

    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter any Number to Check Prime or Not:  "<<endl;
    cin>>n;

    if(prime(n)==2)
        cout<<"Prime"<<endl;
    else    
        cout<<"Not-Prime"<<endl;
    
}
