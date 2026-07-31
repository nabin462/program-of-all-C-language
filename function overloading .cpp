//Program to show function overloadeing
#include<iostream>
using namespace std;
int mul(int a, int b){
    int c;
    c=a*b;
    return c;
}
float mul(float a, float b){
    float d;
    d=a*b;
    return d;
}
int main(){
    cout<<"multiple of two integer number="<<mul(7,8)<<endl;
    cout<<"multiple of two float number="<<mul(2.4f,5.5f);
    return 0;
}