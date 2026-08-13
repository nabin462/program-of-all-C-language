//program to show the multiple inheritance
#include<iostream>
using namespace std;
class student{
    char name[20];
    public:
    void set(){
        cout<<"enter your name"<<endl;
        cin>>name;
    }
    void show(){
        cout<<"Name="<<name<<endl;
    }
};
class stde{
    int id;
    public:
    void get(){
        cout<<"enter your id"<<endl;
        cin>>id;
}
    void display(){
        cout<<"id="<<id;
    }
};
class grade:public student ,public stde{
    int mark;
    public:
    void accept(){
        set();
        get();
        cout<<"enter the mark"<<endl;
        cin>>mark;
    }
    void dis(){
        show();
        display();
        cout<<"mark:"<<mark;
    }

};
int main(){
    grade f;
    f.accept();
    f.dis();
    return 0;
}