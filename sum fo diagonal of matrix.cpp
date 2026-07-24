//Program to find the sum of the diagonal of a matrix
#include<iostream>
using namespace std;
int main(){
    int i,j,a[3][3],sum=0;
    cout<<"enter the matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the sum of diagonal of matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        if(i==j){
            sum=sum+a[i][j];
        }
    }
    cout<<"sum="<<sum;
    return 0;
}