//g++ Cube.cpp
#include <iostream>
using namespace std;
int cube (int n);
int cube (int n){
    return n*n*n;
}
int main(){
    int n;
    cout<<"Enter anyNumber to Find Square";
    cin>>n;

    cout<<"Cube of a Number: "<<cube(n);
}