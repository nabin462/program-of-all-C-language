//program to show the question of inheritance 
#include<iostream>
using namespace std;
class Staff{
    private:
    int code;
    char name[20];
    public:
    void get(){
        cout<<"enter the name and code"<<endl;
        cin>>name>>code;
    }
    void show(){
        cout<<"name:"<<name<<endl<<"code:"<<code<<endl;
    }
};
class teacher:public Staff{
    private:
    int salary;
    char subject[20];
    public:
    void set(){
        get();
        cout<<"enter the subject and salary"<<endl;
        cin>>subject>>salary;
    }
    void display(){
        show();
        cout<<"subject:"<<subject<<endl<<"salary:"<<salary<<endl;
    }
};
class typist:public Staff{
    private:
    int speed;
    public:
    void g(){
        get();
        cout<<"enter the speed"<<endl;
        cin>>speed;
    }
    void da(){
        show();
        cout<<"speed:"<<speed<<endl;
    }
};
class staff:public Staff{
   public:
    void put(){
        get();
    }
    void d(){
        show();
    }
};
int main(){
    staff s;
     s.put();
       s.d();
  
     typist t;
    t.g();
    t.da();
      teacher d;
    d.set();
    d.display();
    return 0;
}