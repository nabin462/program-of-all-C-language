//Progrm to show the negation operator overloading in binary 
#include<iostream>
using namespace std;
class sun{
    int a,b;
    public:
    sun(){
        a=0;
        b=0;
    }
    sun(int d, int e){
        a=d;
        e=b;
    }
    sun operator -(sun s){
        sun v;
        v.a=a-s.a;
        v.b=b-s.b;
        return v;
    }
    void display(){
        cout<<"a="<<a<<endl<<"b"<<b<<endl;
    }
};
int main(){
    sun d(5,4),d1(2,3),d3;
    d3=d-d1;
    d3.display();
    return 0;
}