#include<iostream>
using namespace std;
bool lowerCase(char ch);
bool lowerCase(char ch){
    if(ch>='a'&& ch<='z')
        return true;
    else
        return false;
}
int main(){
    char ch;
    cout<<"Enter Character: "<<endl;
    cin>>ch;

    if(lowerCase(ch))
        cout<<"Character is in Lowercase";
    else
        cout<<"Character is not in Lowercase or any Other Special Symbol";
}