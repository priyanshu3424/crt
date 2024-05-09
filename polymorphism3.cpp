#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Ques : 
class fruit
{
    public:
    void color()
    {
        cout<<"In Fruit Class"<<endl;
    }
};
class mango:public fruit
{
    public:
    void color()
    {
        cout<<"Yellow"<<endl;
    }

};
class apple:public fruit
{
    public:
    void color()
    {
        cout<<"Red"<<endl;
    }

};
class grapes:public fruit
{
    public:
    void color()
    {
        cout<<"Green"<<endl;
    }

};

int main()
{
    mango m1;
    apple a1;
    grapes g1;
    m1.color();
    a1.color();
    g1.color();
    return 0;
}