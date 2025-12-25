#include<iostream>
using namespace std;
bool uppercase(char ch);
bool uppercase(char ch){
    if(ch >= 'A' && ch <= 'Z') {
        return true;
    } else {
        return false;
    }
}
int main() {
    char ch;
    cout << "Enter uppercase character: ";
    cin >> ch;
    if(uppercase(ch))
        cout<<"Character is in Uppercase";
    else
        cout<<"Character is not in Uppercase";
}
