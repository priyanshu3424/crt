#include<iostream>
using namespace std;

class A{                                    // Base class declaration
    int a;
    public:
    void display()
    {
        cout<<"Class A ";
    }
};
class B : public A{                          //Derived class declaration
    int b;
    public:
    void display()
    {
        cout<<"Class B ";
    }
};