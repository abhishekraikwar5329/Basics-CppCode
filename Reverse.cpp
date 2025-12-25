#include<iostream>
using namespace std;
int reverse(int n);
int reverse(int n){
    int rem=0,copy;
    for (int i = n; i>0; i=i/10)
    {
        rem=rem*10;
        rem=rem+(i%10);

    }return rem;
}
int main(){
    int n;
    cout<<"Enter Number for Reverse"<<endl;
    cin>>n;
    
    cout<<reverse(n);   
    
}