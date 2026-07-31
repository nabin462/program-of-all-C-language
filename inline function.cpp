//Program to use of inline function
#include<iostream>
using namespace  std;
inline int area(int l, int b){
    int a;
    a=l*b;
    return a;
}
int main(){
    
    cout<<"area="<<area(7,8)<<endl;
    return 0;
}
