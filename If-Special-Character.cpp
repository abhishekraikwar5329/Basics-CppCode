#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any Character"<<endl;
    cin>>ch;

    if(ch>='0'&& ch<='9')
        cout<<"Number";
    else if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'))
        cout<<"Character";
    else
        cout<<"Special character";

}