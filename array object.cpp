//Program to create array object
#include<iostream>
using namespace std;
class student{
    int  id,mark;
    char name[20];
    public:
    void get(){
        cout<<"enter name ,id and mark"<<endl;
        cin>>name>>id>>mark;
    }
    void display(){
        cout<<"Name="<<name<<endl<<"id="<<id<<endl<<"mark="<<mark<<endl;
    }
};
int main(){
    int i;
    student s[3];
    for(i=0;i<3;i++){
        s[i].get();
    }
    cout<<"student details"<<endl;
    for(i=0;i<3;i++){
        s[i].display();
    }
    return 0;
}