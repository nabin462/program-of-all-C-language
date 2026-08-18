//program to show the virtual destructor in base class
#include<iostream>
using namespace std;
class base{
    public:
    virtual ~ base(){
        cout<<"base destructor"<<endl;
    }
};
class derived:public base{
    public:
    ~ derived(){
        cout<<"derived destructor"<<endl;
    }
};
int main(){
    base *p= new derived;
    delete p;
    return 0;
}