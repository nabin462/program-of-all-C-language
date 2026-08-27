//program to demenstorate the write  data by using write() member function
#include<fstream>
#include<iostream>
using namespace std;
 struct student{
    int roll;
    char name[20];
    char address[20];

 } ;
 int main(){
    student s;
    ofstream fout;
    fout.open("student.dat");
    cout<<"enter the name"<<endl;
    cin>>s.name;
    cout<<"enter rollnmber"<<endl;
    cin>>s.roll;
    cout<<"enter the address"<<endl;
    cin>>s.address;
    fout.write((char*)&s,sizeof(student));
    cout<<"dat is written to the file student .dat"<<endl;
    fout.close();
    return 0;
 }