//Program to show overriding the member function
#include<iostream>
using namespace std;
class base{
    public:
    void show(){
        cout<<"This is base class"<<endl;    }
};
class derived:public base{
    public:
    void show(){
        base::show();
        cout<<"This is derived class"<<endl;
    }
};
int main(){
    derived d;
    d.show();
    return 0;
}