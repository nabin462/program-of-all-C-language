//Program to display the use of static member function
#include<iostream>
using namespace std;
class teacher{
    char name[20];
    int id;
    static int count;
    public:
    void get(){
        cout<<"enter name and id"<<endl;
        cin>>name>>id;
        count++;
    }
    static void display(){
        cout<<"count="<<count<<endl;
    }
};
int teacher::count=1;
int main()
{
    teacher t;
    t.get();
    teacher::display();
    return 0;
}