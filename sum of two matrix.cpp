//Program to find the sum of two matrix
#include<iostream>
using namespace std;
int main(){
    int i,j,a[2][2],b[2][2],sum[2][2];
    cout<<"enter the first matrix"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter second matrix"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"the sum of matrix"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}