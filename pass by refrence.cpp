//Programt to display the swap of two number using pass by refremce
#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main(){
    int x=4,y=6;
    swap(x,y);
    cout<<"after calling "<<endl;
    cout<<"x"<<x<<endl<<"y="<<y<<endl;
    
    return 0;
    
}