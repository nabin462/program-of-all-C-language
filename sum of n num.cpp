//Program to find the sum of n number
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}