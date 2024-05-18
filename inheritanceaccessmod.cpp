#include <bits/stdc++.h>
using namespace std;

class Human
{

public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
};

class Male : protected Human
{

public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }

    int getHeight() {
        return this ->height;
         }
};
int main()
{
    Male m1;
    cout<< m1.getHeight()<<endl;

    return 0;
}