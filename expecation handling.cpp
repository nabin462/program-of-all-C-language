//program to show expextional handling
#include<iostream>
using namespace std;
double  divi(int a, int b){
    if(b==0)
    throw "divisible by 0";
    else
    return(a/b);

}
 int main(){
    int x=4;
    int y=0;
    double z=0;
    try{
        z=divi(x,y);
        cout<<"z="<<z<<endl;
    }
    catch(const char* msg){
        cout<<"msg"<<endl;
    }
    return 0;
 }