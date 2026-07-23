//Program to display the transpose matrix
#include<iostream> 
using namespace std;
int main(){
    int a[3][3],i,j;
    cout<<"enter the 3*3 matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the 3*3 matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
    return  0;
}