//Program to display the n fibonancies series.
#include<iostream>
using namespace std;
int main(){
    int i,f1=0,f2=1,f3,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        cout<<f1<<endl;
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    return 0;
    
}