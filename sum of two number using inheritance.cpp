//program to show the sum of two number using inheritance
#include<iostream>
using namespace std;
class parent{
     public:
    int a;
   
    void get(){
        cout<<"enter a number"<<endl;
        cin>>a;
    }
};
class derived:public parent{
    int b,s;
    public:
    void set(){
        get();
        cout<<"enter another number"<<endl;
        cin>>b;
    }
    void calculate(){
        s=a+b;
        cout<<"sum="<<s;
    }
};
int main(){
    derived d;
    d.set();
    d.calculate();
    return 0;
}