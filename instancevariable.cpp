#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int cm;

public:
    Student(int r, string n, int c)
    {
        roll = r;
        name = n;
        cm = c;
    }
    void Print()
    {
        cout<<roll<<" "<<name<<" "<<cm<<endl;
    }
};

int main()
{
    Student s1(101, "Aayush", 25000);
    Student s2(102, "Vijay", 5000);
    Student s3(103, "Rahul", 56000);
    Student s4(104, "Aayu", 67000);

    s4.Print();

    return 0;
}
