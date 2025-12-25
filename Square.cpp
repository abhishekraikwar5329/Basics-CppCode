//g++ Square.cpp
#include <iostream>
using namespace std;
int square (int n);
int square (int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter anyNumber to Find Square";
    cin>>n;

    cout<<"Square of a Number: "<<square(n);
}