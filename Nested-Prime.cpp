#include<iostream>
using namespace std;

void nesPrime(int num);
void nesPrime(int num){
for(int j=2;j<=num;j++)
    {
        int count=0;
        for ( int i = 1; i <=j ; i++)
        {
            if(j%i==0)
            {
                count++;
            }   
           
    }
     if(count==2){
                cout<<j<<endl;
        }
}
}
int main()
{
    int num;
    cout<<"Enter Range : ";
    cin>>num;

    nesPrime(num);
    
}
