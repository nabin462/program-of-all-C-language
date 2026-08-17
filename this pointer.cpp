//program to show the this pointer
#include<iostream>
using namespace std;
class name{
    int x;
    public:
    void show(int x){
        this ->x=x;
        cout<<"x="<<x;
    }
};
int main(){
    name a;
    a.show(8);
    return 0;
}