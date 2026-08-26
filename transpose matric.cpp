//program to print the trnspose matric
#include<iostream>
using namespace std;
int main(){
    int i,j,a[3][3];
    cout<<"enter the matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the transpose matri:"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}