//Program to concenatation of string .
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter the first and second string"<<endl;
    cin>>s1>>s2;
    cout<<"string concenation="<<s1.append(s2)<<endl;
    return 0;
}