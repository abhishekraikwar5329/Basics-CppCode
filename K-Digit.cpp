//K-Digit.cpp
#include<iostream>
using namespace std;
int checkArmstrong(int n);
int checkArmstrong(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<checkArmstrong(n);
}