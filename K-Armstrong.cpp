//K-Armstrong.cpp
#include<iostream>
using namespace std;
bool checkArmstrong(int num);
int getCount(int num);
int getPower(int rem, int count);
int getPower(int rem, int count)
{
    int power=1;
    for(int i=1;i<=count;i++)
    {
        power=power*rem;
    }
    return power;
}
// count method banai hai mene count nikalne ke liye...
int getCount(int num)
{
    int count=0;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    return count;
}
// Checking wheather number is armstrong or not...
bool checkArmstrong(int num)
{
    int rem, sum=0,copy=num;
    int count=getCount(num);
    //Armstrong ka Code...
    while(num>0)
    {
        rem=num%10;
        sum=sum+getPower(rem,count);
        num=num/10;
    }
    return(copy==sum);
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(checkArmstrong(n))
        cout << "ARMSTRONG HAI RE BABA";
    else
        cout << "ARMSTRONG NAI HAI KAL AANA";

    
}