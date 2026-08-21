//program to show the sum of two numbers using template
#include<iostream>
using namespace std;
template<class t>
t sum(t a, t b){
    return a+b;
}
int main(){
    int a,b;
    float c,d;
    cout<<"enter two integer number"<<endl;
    cin>>a>>b;
    cout<<"sum="<<sum(a,b)<<endl;
    cout<<"enter the two float number"<<endl;
    cin>>c>>d;
    cout<<"sum="<<sum(c,d)<<endl;
    return 0;
}