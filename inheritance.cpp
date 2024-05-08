#include<iostream>
using namespace std;

class Test {
public:
    void show() 
    {
        cout << "Hello ";
    }
};

class base : public Test {
public:
    void dis() 
    {
        cout << "Welcome";
    }
};

int main() 
{
    base b;
    b.show();
    b.dis();
    return 0;
}
