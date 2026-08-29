//program to display the structure question
#include<iostream>
using namespace std;
struct student{
    char name[20];
    int id, mark;
}s[4];
int main(){
    int i;
    for(i=0;i<4;i++){
        cout<<"enter the name "<<endl;
        cin>>s[i].name;
        cout<<"enter id and mark"<<endl;
        cin>>s[i].id>>s[i].mark;
    }
    cout<<"student details"<<endl;
     cout<<"name\t id\t mark"<<endl;
    for(i=0;i<4;i++){
        if(s[i].mark>=80){
       
        cout<<s[i].name<<"\t"<<s[i].id<<"\t"<<s[i].mark<<endl;
        }
    }
    return 0;

}