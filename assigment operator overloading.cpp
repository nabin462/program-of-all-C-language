//program to show the assignment operator overloading
#include<iostream>
using namespace std;
class mark{
    private:
    int m1,m2;
    public:
    mark(){
        m1=0;
        m2=0;
    }
    mark(int i, int j){
        m1=i;
        m2=j;
    }
    void operator =(const mark &m){
        m1=m.m1;
        m2=m.m2;
    }
    void display(){
        cout<<"mark of 1st student:"<<m1<<endl;
        cout<<"mark of 2nd student"<<m2<<endl;
        }
};
int main(){
    mark m1(84,96);
    mark m2(56,36);
    cout<<"mark of first student"<<endl;
    m1.display();
    cout<<"mark of second student:"<<endl;
    m2.display();
    m1=m2;
    cout<<"mark of first student:";
    m1.display();
    return 0;
}