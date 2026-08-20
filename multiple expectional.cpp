//program to show the multiple expectional
#include<iostream>
using namespace std;
int main(){
    int choice;
    try{
    cout<<"enter your choice"<<endl;
    cin>>choice;
    if(choice==0){
        cout<<"hellow baby";
    }
    else if(choice==1){
        throw(100);
    }
    else if(choice==1){
        throw("x");
    }
    else {
        cout<<"bye baby";
    }
    }    
    catch(int a){
        cout<<"integer expection";
    }
    catch(char b){
        cout<<"character expection";
    }
    return 0;
}