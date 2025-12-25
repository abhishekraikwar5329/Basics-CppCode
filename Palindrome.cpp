#include <iostream>
using namespace std;
bool palindrome(int num);
bool palindrome(int num){
    int rem=0,count=0,copy=0;
    
    copy=num;
    for(int i=num;i>0;i=i/10){
        rem=rem*10;
        rem=rem+(i%10);
        count++;
    }
    if(rem==copy)
        return true;
    else
        return false;

}
int main(){
    
    int num,rem,count=0,copy;
    cout<<"Enter a Number: "<<endl;
    cin>>num;

    if(palindrome(num))
        cout<<"PALINDROME";
    else
        cout<<"Palin nai hai ";

}