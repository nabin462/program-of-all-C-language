//program to show the ambiguity in inheritance
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"This is class A"<<endl;
    }
};
class B{
    public:
    void show(){
        cout<<"this is class B"<<endl;
    }
};
class C:public A ,public B{
    public:
    void show(){
    A::show();
    B::show();
    }
};
int main(){
    C d;
    d.show();
    return 0;
}