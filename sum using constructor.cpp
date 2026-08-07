//program to sum of two number using constructor
#include<iostream>
using namespace std;
class sum{
    int a,b,s;
    public:
    sum(){
        a=40;
        b=60;
        s=a+b;
        cout<<"sum="<<s<<endl;
    }
};
int main(){
    sum s;
    return 0;
}