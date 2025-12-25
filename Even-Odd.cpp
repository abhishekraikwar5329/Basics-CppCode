#include <iostream>
using namespace std;
void check(int n);
void check(int n){
	if (n % 2 == 0)
		cout << "Even hai";
	else
		cout << "Odd hai";

}
int main() {
	int num;
    cout<<"Enter NUmber to check for EVEN- ODD: ";
    cin>>num;

	check(num);
	
}