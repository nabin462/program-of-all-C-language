//program to display the single inheritance 
#include<iostream>
using namespace std;
class base{
    int a;
    public:
    void get(){
        cout<<"enter the first number"<<endl;
        cin>>a;
    }
    void show(){
        cout<<"a="<<a<<endl;
    }
    
};
class derived:public base{
    int b;
    public:
    void set(){
        get();
        cout<<"enter the second number"<<endl;
        cin>>b;
    }
    void display(){
        show();
       cout<<"b="<<b<<endl;
    }
    
};
int main(){
    derived d;
    d.set();
    d.display();
    return 0;
}