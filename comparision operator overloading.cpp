//Program to show the comparison operator overloading
#include<iostream>
using namespace std;
class value{
    int number;
    public:
    value(){
        number=0;
    }
    value(int n){
        number=n;
    }
    bool operator >(value c){
        return c.number;
    }
    
    
};
int main(){
    value v1(9),v2(6);
    if(v1>v2){
        cout<<"v1 is greater";
    }
    else{
        cout<<"v2 is greater";
    }
    return 0;
}