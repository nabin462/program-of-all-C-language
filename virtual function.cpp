//Program to show the virtual function
#include<iostream>
using namespace  std;
class base{
    public:
    virtual void display(){
        cout<<"this is base class"<<endl;
    }
    void show(){
        cout<<"show the base class"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"this is derived class"<<endl;
    }
    void show(){
        cout<<"show the derived class"<<endl;
    }
};
int main(){
    base *ptr,a,b;
    ptr=&a;
    ptr->display();
        ptr->show();
    ptr=&b;
    ptr->display();

    return 0;
}