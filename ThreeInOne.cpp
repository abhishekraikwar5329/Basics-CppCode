#include<iostream>
using namespace std;
int main(){
    int n,rem=0,count=0,copy;
    cout<<"Enter the number: ";
    cin>>n;
    copy=n;
    for(int i=n; i>0;i=i/10){
        rem=rem*10;
        rem=rem+(i%10);
        count++;
    }
    cout<<rem<<endl;
    cout<<count<<endl;

    if(n=copy)
        cout<<"Palindrome"<<endl;
    else    
        cout<<"Not-Palindrome";
}