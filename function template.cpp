//program to show the function template
#include<iostream>
using namespace std;
template<class t>
t large(t n, t m){
    return (n>m)?n:m;
}
int main(){
    int a,b;
    float d,e;
    char f,g;
    cout<<"enter the two integer value"<<endl;
    cin>>a>>b;
    cout<<large(a,b)<<"is larger"<<endl;

     cout<<"enter the two float value"<<endl;
    cin>>d>>e;
    cout<<large(d,e)<<"is larger"<<endl;
    
     cout<<"enter the two character"<<endl;
    cin>>f>>g;
    cout<<large(f,g)<<"is  larger ASCII "<<endl;
    return 0;

    
    

    

}