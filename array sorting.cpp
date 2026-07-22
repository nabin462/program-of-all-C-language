//Program to sorting array element
#include<iostream>
using namespace std;
int main(){
    int i,j,a[5]={5,8,1,3,9},temp;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j])
            {
                 temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
    }
    cout<<"sorting array:"<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;
    
}