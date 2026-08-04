//program to find the area of triangle using friend functon
#include<iostream>
using namespace std;
class triangle{
    int l,b;
    public:
    void get(){
        l=10;
        b=20;
    }
    friend int area(triangle t);
};
int area(triangle t){
    return (t.l*t.b)/2;

}
int main(){
    triangle s;
    s.get();
    cout<<"area="<<area(s);
    return 0;
    
}