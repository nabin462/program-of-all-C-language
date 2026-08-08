//program to show the plus operator overloading
#include<iostream>
using namespace std;
class distan{
    int feet,inch;
    public:
   void get(){
    cout<<"enter feet and inch"<<endl;
    cin>>feet>>inch;
   }
   distan operator +(distan d2){
    distan d3;
    d3.feet=feet+d2.feet;
    d3.inch=inch+d2.inch;
    d3.feet=d3.feet+d3.inch/12;
    d3.inch=d3.inch%12;
    return d3;
   
   }
   void display(){
    cout<<"("<<feet<<","<<inch<<")"<<endl;
   }
};
int main(){
    distan d1,d2,d3;
    d1.get();
    d2.get();
    d3=d1+d2;
    d1.display();
    cout<<"d1";
    d2.display();
    cout<<"d2=";
    d3.display();
    cout<<"d3=";
    return 0;
    
}