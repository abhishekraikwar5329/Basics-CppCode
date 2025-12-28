//Array-VowelCon-Count.cpp
#include<iostream>
using namespace std;
int main()
{

    char arr[50];
    cout<<"Enter Name"<<endl;
    cin>>arr;
    int vowelCount=0;
    int conCount=0;
    for(int i=0; i<arr[i]!='\0'; i++)
    {
        if((arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')||(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'))
            vowelCount++;
        else
            conCount++;
    }
    cout<<"Total Number of Vowels in an Array are: "<<vowelCount<<endl;
    cout<<"Total Number of Consonant in an Array are: "<<conCount<<endl;

    cout<<"length of Given String are: "<<vowelCount+conCount<<endl;
}