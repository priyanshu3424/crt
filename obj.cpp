#include<iostream>
using namespace std;

// class test
// {
//     public:
//     int a=90;
//     void show()
//     {
//         cout<<a;
//     }
// };
// int main()
// {
//     test t;
//     t.show();
// }

//----------------------------------------------------

class test
{ 
    public:
    int roll;  // global variable scope whole program
    void insert() 
    {
        int r;
        roll = r;  // r is a local variable
    }
    void display()
    {
        cout<<roll;
    }
};
int main()
{
    test t;
    t.insert();
    t.display();
}

