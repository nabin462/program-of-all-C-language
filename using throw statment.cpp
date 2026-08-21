//program to show the throw statment
#include<iostream>
using namespace std;
void diivide(int a, int b){
    try{
        if(b==0)
        throw b;
        else
        cout<<"result:"<<(float)a/b;
        
    }
    catch(int){
        throw;
    }
}
int main(){
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    try{
        diivide(a,b);
    }
    catch(int i){
        cout<<"divide by zero expection:b"<<i;
    }
    
    return 0;
}