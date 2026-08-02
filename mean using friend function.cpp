//program to find the mean using friend  function
#include<iostream>
using namespace std;
class mean{
    int a,b;
    public:
    void set(){
        cout<<"enter two number"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
        
    }
    friend int  calculat(mean m);
};
int  calculat(mean m){
    return(m.a+m.b)/;
    

}
int main(){
    mean s;

    s.set();
      s.display();
       cout<<"mean="<<calculat(s);
  
    
    return 0;
}