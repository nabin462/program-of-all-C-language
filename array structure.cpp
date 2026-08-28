//program to display the array structure
#include<iostream>
using namespace std;
struct employee
{
    char name[20];
    int salary;
};
int main(){
    int i;
    employee e[4];
    for(i=1;i<=4;i++){
        cout<<"enter the name"<<endl;
        cin>>e[i].name;
        cout<<"enter the salary"<<endl;
        cin>>e[i].salary;
    }
    cout<<"the details of employee"<<endl;
    for(i=1;i<=4;i++){
        cout<<"Name:"<<e[i].name<<endl;
        cout<<"salary:"<<e[i].salary<<endl;
    }
    return 0;
}
