//Program to display the reverse number
#include<iostream>
using namespace std;
int main(){
    int n,rem,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n>0){
        rem=n%10;
        rev=rev+rem;
        n=n%10;
    }
    cout<<"reverse="<<rev;
    return 0;
}