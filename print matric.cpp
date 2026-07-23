//Program to print the matrix
#include<iostream>
using namespace std;
int main(){
    int i,a[2][2],j;
    cout<<"enter the matrix"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

        
        cin>>a[i][j];
        }
    }
    cout<<" the matrix"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

        
        cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}