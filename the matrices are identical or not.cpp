//Program  to check the two matrix are identical or not
#include<iostream>
using namespace std;
int main(){
    int i,j,a[2][2],b[2][2];
    cout<<"enter the first matrx"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

        
        cin>>a[i][j];
        }
    }
    cout<<"enter the second matrix"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

        
        cin>>b[i][j];
        }
    }
      for(i=0;i<2;i++){
          for(j=0;j<2;j++){
            if(a[i][j]==b[i][j])
            {
                cout<<"the two matrix are identical"<<endl;
            }
            else{
                cout<<" the two matrix are not identical";
            }
          }
      }

    return 0;
}