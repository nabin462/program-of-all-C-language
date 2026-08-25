//program to display the triangle pattern print
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            if(i+j<=6){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}