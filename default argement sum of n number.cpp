//program to shwo the default argument the sum of n number
#include<iostream>
using namespace std;
void sum(int n=5){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum="<<sum;
}
int main(){
    sum();//default argrmebt;
    cout<<endl;
    sum(50);
    return 0;
}