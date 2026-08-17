//program to show the virtual destructor
#include<iostream>
using namespace std;
class base{
    public:
    ~base(){
        cout<<"base destructor"<<endl;
    }
};
class derived:public base{
    public:
    ~derived(){
        cout<<"derived destructor"<<endl;
    }
};
int main(){
    base *p=new derived;
    delete p;
    return 0;
}