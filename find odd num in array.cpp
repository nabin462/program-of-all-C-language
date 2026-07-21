//Program to find the odd number in array
#include<iostream>
using namespace std;
int main(){
    int i,arr[5]={5,8,3,7,1};
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
