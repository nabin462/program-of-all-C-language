//program to show the plus operator overloading using friend function
#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    complex(){
        real=imaginary=0;
    }
    complex(int r, int i){
        real=r;
        imaginary=i;
    }
    friend complex operator +(complex ,complex );
    void display(){
        cout<<"rea;="<<real<<endl<<"imaginary="<<imaginary<<endl;

    }
};
complex operator +(complex c1,complex c2){
    complex x;
    x.real=c1.real+c2.real;
    x.imaginary=c1.imaginary+c2.imaginary;
    return x;
    
}
int main(){
    complex d(8,9),d1(5,6),d3;
    d3=d+d1;

    d3.display();
    return 0;
}