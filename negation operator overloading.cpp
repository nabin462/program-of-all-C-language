//program to show the negation operator overloading for unary operator;
#include<iostream>
using namespace std;
class point{
    int x;
    public:
    point(){
        x=0;
    }
    point(int c){
        x=c;
    }
    point operator -(){
        point t;
        t.x=-x;
    }
    void display(){
        cout<<"x="<<x<<endl;
    }
};
int main(){
    point p(9),p1;
    p1=-p;
    p1.display();
    return 0;
}