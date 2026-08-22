//program to shwo the abstract base class and pure virtual function
#include<iostream>
using namespace std;
class plygon{
    protected:
    int width, breadth;
    public:
    void set(int a, int b){
        width=a;
        breadth=b;
    }
    virtual int area()=0;
};
class rectangle: public plygon{
    public:
    int area(){
        return (width*breadth);
    }
};
class triangle:public plygon {
    public:
    int area(){
        return (width*breadth/2);
    }
};
int main(){
    rectangle rect;
    triangle tri;
    plygon *p;
    p=&rect;
    p->set(4,5);
    cout<<"area of rectangle="<<p->area()<<endl;
    p=&tri;
    p->set(6,5);
    cout<<"area of triangle=="<<p->area()<<endl;
    return 0;

}