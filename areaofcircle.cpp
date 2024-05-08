#include<iostream>
using namespace std;

class A{
    public:
 int r=5;
};

class B: public A{
    public:
    int area(){
        cout<<3.14*r*r<<endl;
    }
};

int main(){
    B b1;
    b1.area();
    return 0;
}