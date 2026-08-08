//program to show the unarary operratro overloading
#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
    public:
    rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    void operator++(){
        ++length;
        ++breadth;
    }
    void display(){
        cout<<"lenth"<<length<<endl<<"breadth"<<breadth<<endl;
    }
};
int main(){
    rectangle r(6,5);
    ++r;
    r.display();
    return 0;
}