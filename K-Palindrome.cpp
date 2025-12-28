// K-Palindrome.cpp
#include<iostream>
using namespace std;
bool checkPalindrome(int num);
bool checkPalindrome(int num)
{
    int copy=num, rev=0, rem;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(copy==rev)
        return true;
    else    
        return false;
}


int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;

    bool flag=checkPalindrome(n);
    if(flag)
        cout<<"ARMSTRONG HAI RE BABA.";
    else
        cout<<"ARMSTRONG NAI HAI KAL AANA.";
}