//Program to display the default constructor
#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
    public:
    rectangle(){
        length=12;
        breadth=10;
        cout<<"length="<<length<<endl<<"breadth="<<breadth<<endl;
    }
    
    
};
int main(){
    rectangle r;
    return 0;
}