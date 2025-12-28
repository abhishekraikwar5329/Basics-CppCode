//
#include<iostream>
using namespace std;
int doReverse(int n);
int doReverse(int n)
{
    int rev=0,rem;
    while(n>0)// if  n=123...
    {
        rem=n%10; // isse last ka digit nikala hai../ rem=3,/ rem=2/ rem=1. 
        rev=rev*10+rem;// 0=0*10+rem ie= 3, / same formula ans= 30+2=32/ same frmula ans= 320+1= 321
        n=n/10;// isse last ka digit remove kra hai. / 3 remove ab n=12. / 2 remove ab 1 bacha/ terminate1. 
    }
    return rev;
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<doReverse(n);

}