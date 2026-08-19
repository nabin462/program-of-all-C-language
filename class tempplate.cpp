//program to show the class template
#include<iostream>
using namespace std;
template<class t>
class large{
    t a,b;
    public:
    large(t first, t second){
        a=first;
        b=second;
    }
     t max(){
       t val;
       val=a>b?a:b;
       return val;
     }
};
int main(){
    large<int>d(5,6);
    large<float>d1(9.0,8.9);
    cout<<"larger is"<<d.max()<<endl;
    cout<<"larger is "<<d1.max()<<endl;
    return 0;
}