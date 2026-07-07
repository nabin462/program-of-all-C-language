//program to calculate the simple interest.
#include<iostream>
using namespace std;
int main(){
    int p,t,r,s;
    cout<<"enter the principle, rate and time"<<endl;
    cin>>p>>r>>t;
    s=(p*t*r)/100;
    cout<<"simple interest="<<s<<endl;
    return 0;
} 