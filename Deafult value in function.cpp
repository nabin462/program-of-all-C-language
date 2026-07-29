//Programt to defult valude in function
#include<iostream>
using namespace std;
int area(int l,int b=10){
    int a;
    a=l*b;
    return a;
}
int main(){
    
    cout<<"area="<<area(5)<<endl;
    return 0;
}