//program to show the object to object conversion
#include<iostream>
using namespace std;
class dist{
    int feet,inch;
    public:
    dist(){
        feet=0;
        inch=0;
    }
    dist(int f,int i){
        feet=f;
        inch=i;
    }
    void display(){
        cout<<feet<<"ft"<<inch<<"inch"<<endl;
    }
};
class dis{
    int meter,centimeter;
    public:
    dis(int m, int c){
        meter=m;
        centimeter=c;

    }
    operator dist(){
        dist d;
        int f,i;
        f=meter*3.3;
        i=centimeter*0.4;
        f=f+i/12;
        i=i%12;
        return dist(f,i);
    }
};
int main(){
    dist d1;
    dis d2(4,50);
    d1=d2;
    d1.display();
    return 0;
}