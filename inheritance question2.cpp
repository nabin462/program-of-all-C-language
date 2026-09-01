//program to show the inheritance question
#include<iostream>
#include<string>
using namespace std;
class person{
    protected:
    int age;
    float salary;
    public:
    person(int a, float s){
      age=a;
      salary=s;
    }
    void show(){
        cout<<"age="<<age<<endl<<"salary="<<salary<<endl;
    }
    
};
class doctor:public person{
    int did;
    char h_name[20];
    public:
    doctor( const char name[20], int id,int a,float s):person(a,s)
    {
   strcpy(h_name,name);
    did=id;
       
    }
    void display(){
        show();
        cout<<"h_name="<<h_name<<endl<<"did="<<did<<endl;
    }

};

class student:public person{
    int sid;
    float CGPA;
    public:
    student(int d,float c,int a,float s):person(a,s){
        sid=d;
        CGPA=c;
    }
    void dis(){
        show();
        cout<<"sid="<<sid<<endl<<"CGPA="<<CGPA<<endl;
    }
};

class clerk:public person{
    public:
    clerk(int a, float s):person(a,s){

    }
    void rep(){
        show();
    }
};
int main(){
    doctor d("nabin",12,21,5200.0);
    d.display();
    student g(12,3.25,20,2500.0);
    g.dis();
     clerk f(20,3000.20);
     f.rep();

    return 0;
}