//program to calculate the mean using friend function.
#include<iostream>
using namespace std;
class mean{
    private:
    int a,b,c,d;
    public:
    void get(){
        a=20;
        b=30;
        c=65;
        d=36;
    }
    friend int cal(mean s);
   
};
int cal(mean s){
   return (s.a+s.b+s.c+s.d)/4;
}
int main(){
    mean d;
    d.get();
    cout<<"mean="<<cal(d)<<endl;
    return 0;
}