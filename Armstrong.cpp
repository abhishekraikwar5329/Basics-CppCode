#include<iostream>
using namespace std;
bool Armstrong(int num);
bool Armstrong(int num){
        int rem,count=0,sum=0,pow=1;
        
        for (int i = num; i >0; i=i/10)
        {
            count++;
        }
        for(int i=num;i>0;i=i/10){
            rem=i%10;
            for(int j=1;j<=count;j++){
                pow=pow*rem;
            }
            sum=sum+pow;
            pow=1;
        }
        if(sum==num)
            return true;
        else
            return false;
}
int main(){
        
        int num;
        cout<<"Enter Number : ";
        cin>>num;

        int ans= Armstrong(num);
        if(ans==true)
            cout<<"Armstrong hai. ";
        else 
            cout<<"Armstrong nhi hai. ";
}