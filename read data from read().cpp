//program to  read data from binary file using read() member function
#include<fstream>
#include<iostream>
using namespace std;
struct student{
    int roll;
    char address[20];
    char name[20];
};
 int main(){
    student s;
    ifstream fin;
    fin.open("student.dat");
    fin.read((char*)&s,sizeof(student));
    cout<<"name"<<s.name;
    cout<<"roll number"<<s.roll;
    cout<<"address"<<s.address;
    fin.close();
    return 0;
 }