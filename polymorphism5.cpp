#include<iostream>
using namespace std;

class Test {
    public:
    void show()
    {
        cout<<"Hello";
    }
    void show(int x)
    {
        cout<<x;
    }
    void show(char x)
    {
        cout<<x;
    }
};
int main()
{ 
    Test t;
    t.show('A');
    return 0;
}
