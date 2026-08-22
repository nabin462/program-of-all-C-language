//program to demonestrate the switch
#include<iostream>
using namespace std;


void sum(){
    int n,i;
    int s;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    cout<<"sum="<<s<<endl;


}
 
void fact(){
    int n,i;
    int f=1;
    cout<<"enter  the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"factorial ="<<f<<endl;
}

void even(){
    int a,i;
    cout<<"entet the number"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(a%2==0)
        {
            cout<<a<<endl;
        }
    }
}
int main(){
    int choice;
    cout<<"1 : sum of n number"<<endl;
    cout<<"2: factorial of number"<<endl;
    cout<<"3 :print n even number"<<endl;
    cout<<"4: Exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
    
        case 1:
        sum();
        break;

        case 2:
        fact();
        break;
         
        case 3:
        even();
        break;
    
    default:
    cout<<"enter vallid choice"<<endl;
        break;
    }
}