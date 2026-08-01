//Program  to find the sum of two number using class and object.
#include<iostream>
using namespace std;
class sum{
    private:
    int a,b,s;
    public:
    void getdata(){
        cout<<"enter the two number"<<endl;
        cin>>a>>b;
    }
    void find(){
        s=a+b;
    }
    void display(){
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
        cout<<"sum="<<s;
    }
};
int main(){
    sum c;
    c.getdata();
    c.find();
    c.display();
    return 0;
}