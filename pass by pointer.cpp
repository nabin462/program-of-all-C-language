//Program  of pass by pointer to swap the two number
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    cout<<"enter two number"<<endl;
    cin>>x>>y;
    swap(&x,&y);
    cout<<"After calling"<<endl;
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    return 0;
}