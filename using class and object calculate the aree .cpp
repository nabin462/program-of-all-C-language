//program to find the area using scope resolution operator
#include<iostream>
using namespace std;
class area{
    int l,b,a;
    public:
    void set();
    void calculate();
    void show();
};
void area::set(){
    cout<<"enter the length and breadth"<<endl;
    cin>>l>>b;
}
void area::calculate(){
    a=l*b;
}
void area::show(){
    cout<<"lenth="<<l<<endl<<"breadth="<<b<<endl;
    cout<<"area="<<a;
}
int main(){
    area d;
    d.set();
    d.calculate();
    d.show();
    return 0;
}