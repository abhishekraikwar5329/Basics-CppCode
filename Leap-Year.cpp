#include <iostream>
using namespace std;
void leapYear(int year);
void leapYear(int year){
    
    if(year%400==0  || (year  % 4==0 && year %100 !=0))
        cout<<"Year Is Leap Year";
    else
        cout<<"Year Is Not Leap Year";
    
}
int main() {
    int year;
    cout << "Enter Year: ";
    cin >> year;

    leapYear(year);

        
}
