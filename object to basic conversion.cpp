//program to display the object to basic conversion
#include<iostream>
using namespace std;
class dist{
    int feet,inch;
    public:
    dist(int f, int i){
      feet=f;
      inch=i;
    }
    operator float(){
        float a=feet+inch/12.0;
        return a;
    }
};
int main(){
    dist d(8,6);
    float x=(float)d;
    cout<<"x="<<x;
    return 0;
}