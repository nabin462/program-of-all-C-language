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
int main(){
    doctor d("nabin",12,21,5200.0);
    d.display();
    return 0;
}