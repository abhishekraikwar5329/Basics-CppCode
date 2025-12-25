#include <iostream>
using namespace std;
void vc(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o'|| x == 'u' || x == 'A' || x == 'E' || x == 'I'|| x == 'O' || x == 'U')
        cout << "Vowel haii" << endl;
    else
        cout << "Consonant haii" << endl;
}

int main()
{
    char ch;
    cout<<"Enter ch: "<<endl;
    cin>>ch;
    vc(ch);
}