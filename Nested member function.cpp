//program to display the nested menber function
#include<iostream>
using namespace std;
class total{
    int p,t,r;
    public:
    void get(){
        cout<<"enter the p,t,r"<<endl;
        cin>>p>>t>>r;
    }
    int findinterest(){
        int i;
        i=(p*t*r)/100;
        return i;
    }
    void findtotal(){
        int t;
        t=p+findinterest();
        cout<<"total amount="<<t<<endl;
    }
};
int main(){
    total d;
    d.get();
    d.findtotal();
    return 0;
}