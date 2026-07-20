//Program to check the number is palindrome or not
#include<iostream>
using namespace std;
int main(){
    int n,temp,rem,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp=n;
    while(n>0){
        n=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum=temp){
        cout<<"the number is palindrome";
    }
    else{
        cout<<"the number is not palindrome";
    }
    return 0;
}