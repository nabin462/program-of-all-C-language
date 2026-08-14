//program to show the multilevel inheritance
#include<iostream>
using namespace std;
class student{
    char name[20];
    public:
    void get(){
        cout<<"enter the name"<<endl;
        cin>>name;
    }
    void display(){
        cout<<"name:"<<name;
    }

};
class rol:public student{
    int r;
    public:
    void set(){
        get();
        cout<<"enter roll number"<<endl;
        cin>>r;
    }
    void show(){
        display();
        cout<<"roll="<<r;
    }
};
class mark:public rol{
    int mark;
    public:
    void getdata(){
        set();
        cout<<"enter the mark"<<endl;
        cin>>mark;
    }
    void displayd(){
        show();
        cout<<"mark="<<mark;
    }
};
int main(){
    mark m;
    m.getdata();
    m.displayd();
    return 0;
}