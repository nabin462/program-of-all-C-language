//program to show the static function
#include<iostream>
using namespace std;
class A{
    public:
    static void show(){
        cout<<" static function";
    }
};
int main(){
    A c;
    A::show();
    return 0;
}