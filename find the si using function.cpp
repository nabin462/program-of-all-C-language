//Program to calculate the simple interest using function
#include<iostream>
using namespace std;
void si(){
    int i,p,t,r;
    cout<<"enter p.t.r"<<endl;
    cin>>p>>t>>r;
    i=(p*t*r)/100;
    cout<<"simple interest="<<i<<endl;
}
int  main(){
    si();
    return 0;
}