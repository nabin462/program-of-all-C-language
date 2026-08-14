//program to show the hierachical inheritance 
#include<iostream>
using namespace std;
class employee{
    int eid ,salary;
    public:
    void get(){
        cout<<"enter the employee id and salary"<<endl;
        cin>>eid>>salary;
    }
    void display(){
        cout<<"eid="<<eid<<endl<<"salary="<<salary<<endl;
    }
};
class engineer:public employee{
    char d{20};
    public:
    void getdata(){
        get();
        cout<<"enter the Departament"<<endl;
        cin>>d;
    }
    void displayd(){
        display();
        cout<<"department="<<d;
    }
};
class typist:public employee{
    int ts;
    public:
    void set(){
        get();
        cout<<"enter the typespeed"<<endl;
        cin>>ts;
    }
    void disp(){
        display();
        cout<<"typespeed="<<ts;
    }
};
int main(){
    engineer d;typist t;
    d.getdata();
    t.set();
    cout<<"details"<<endl;
    d.displayd();
   
    t.disp();
    return 0;
}