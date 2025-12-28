//K-Prime.cpp
#include<iostream>
using namespace std;
bool isPrime(int n);
bool isPrime(int n)
{
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
        return true;
    else
        return false;

}
int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;
    bool flag= isPrime(n);
    if(flag)
        cout<<"PRIME";
    else
        cout<<"NOT-PRIME";
}