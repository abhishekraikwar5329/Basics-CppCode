//Fibonacci.cpp
#include<iostream>
using namespace std;
void fibonacci(int num);
void fibonacci(int num){
    int fnum=0, snum=1;
    int tnum;
    for(int i=0;i<num;i++){
        cout<<fnum<<" " ;
        tnum=fnum+snum;
        fnum=snum;
        snum=tnum;
    }
}
int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;

    fibonacci(num);
}