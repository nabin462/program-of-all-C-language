/*program to find the commission of a sales person if sales is more than 5000 then the sales persong
get 5% commissiion of sale*/
#include<iostream>
using namespace std;
int main(){
    int s,c;
    cout<<"enter the sale amount"<<endl;
    cin>>s;
    if(s>=5000){
        c=(s*5)/100;
        cout<<"commission="<<c;
    }
    else{
        cout<<"commission is zero";
    }
    return 0;
}