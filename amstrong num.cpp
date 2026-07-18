//Program to check the number is amstrong or not
#include<iostream>
using namespace std;
int main(){
    int i,n,temp,sum=0,rem;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==temp){
        cout<<"the number is amstrong";
    }
    else{
        cout<<"the number is not amstrong";
    }
    return 0;
}