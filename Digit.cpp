#include<iostream>
using namespace std;
int Digit(int num);
int Digit(int num){
    int rem,count=0;;
    for(int i=num;i>0;i=i/10){
        rem=rem*10;
        rem=rem+(i%10);
        count++;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter Numberr"<<endl;
    cin>>num;

    cout<<Digit(num)<<" DIGITS IN A NUMBER HAI..";
    
}