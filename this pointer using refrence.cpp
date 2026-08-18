//program to show the this pointer using refrence
#include<iostream>
using namespace std;
class base{
    int x, y;
    public:
    base(int x=0, int y=0){
        this ->x=x;
        this ->y=y;
    }
     base & setx(int a){
        x=a;
        return *this;

     }
     base & sety(int b){
        y=b;
        return *this;

     }
      void display(){
        cout<<"x="<<x<<endl<<"y="<<y;
      }
};
int main(){
    base obj1(5,5);
    obj1.setx(7).sety(9);
    obj1.display();
    return 0;
}