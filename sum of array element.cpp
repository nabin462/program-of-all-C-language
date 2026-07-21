//program to sum of arraay element
#include<iostream>
using namespace std;
int main(){
    int i,a[4]={4,5,1,2},sum=0;
    for(i=0;i<4;i++){
        sum=sum+a[i];
    }
    cout<<"sum="<<sum;
    return 0;
}