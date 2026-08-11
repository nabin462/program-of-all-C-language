//program to show the basic to voject conversiion
#include<iostream>
using namespace std;
class dis{
    int f,i;
    public:
    dis(float m){
        f=int (m);
        i=12*(m-f);

    }
    void display(){
        cout<<"feet="<<f<<endl<<"inche="<<i<<endl;
    }
};
int main(){
    dis d(2.5);
    d.display();
    return 0;
}