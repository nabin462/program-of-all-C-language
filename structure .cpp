//program to show the structure 
#include<iostream>
using namespace std;
struct student 
{
    char name[20],address[20];
    int id;

}s;
int main(){
    cout<<"student details:"<<endl;
    cout<<"Enter your name"<<endl;
    cin>>s.name;
    cout<<"enter your address"<<endl;
    cin>>s.address;
    cout<<"enter your id"<<endl;
    cin>>s.id;
    cout<<"print the details of student"<<endl;
    cout<<"Name\t"<<"Address\t"<<"id"<<endl;
    cout<<s.name <<s.address <<s.id<<endl;
    return 0;
}
