//program to show copy constructor.
#include<iostream>
using namespace std;
class book{
    int code,price;
    public:
    book(){
      code=0;
      price=0;
    }
    book(int c,int p){
        code=c;
        price=p;
    }
    book(book &b){
        code=b.code;
        price=b.price;
    }
    void show(){
        cout<<"code="<<code<<endl<<"price="<<price<<endl;
    }
};
int main(){
    book d;
    book f(32,560);
    book e(f);
    d.show();
    f.show();
    e.show();
    return 0;
}

