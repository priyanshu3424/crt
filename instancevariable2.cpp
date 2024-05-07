#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    static int cm;

public:
    Student(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }

    void dis()
    {
        cout << roll << " " << name << " " << cm << endl;
    }
};

int Student::cm = 7500;

int main()
{
    Student s1(101, "Ravi");
    s1.dis();

    return 0;
}
