//program to display the use of static data member for counting
#include<iostream>
using namespace std;
class student{
     char name[20];
    int roll;
    static int count;
    public:
    void get(){
        cout<<"enter the name and roll"<<endl;
        cin>>name>>roll;
        count++;
    }
    void display(){
        cout<<"count="<<count<<endl;
    }
};
int student::count=0;
int main(){
    student s;
    s.get();
    s.display();
    return 0;
}
