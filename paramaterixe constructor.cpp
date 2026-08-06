//program to show the paramaterixed constructor
#include<iostream>
using namespace std;
class subject{
    int code,price;
    public:
    
    subject(int c,int p){
        code=c;
        price=p;
    }
    void display(){
        cout<<"code="<<code<<endl<<"price="<<price<<endl;
    }
    
    
};
int main(){
    subject t(5,6);
    t.display();
    return 0;
}