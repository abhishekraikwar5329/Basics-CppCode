//Pos-Neg-Zero.cpp
#include <iostream>
using namespace std;
int checker(int num);
int checker(int num){
    if(num==0)
        return 0;
    else if (num>0)
        return 1;
    else 
        return 2;
}
int main(){
    int num;
    cout<<"Enter Number to Check Wherater it is -ve, +ve or zero"<<endl;
    cin>>num;

    int ans= checker(num);
    if(ans==0)
        cout<<"Zer0";
    else if (ans==1)
        cout<<"Positive";
    else if (ans ==2)
        cout<<"Negative";
}