#include<iostream>
using namespace std;

class Student
{ 
    int roll;
    string name;

public:
    void input();
    void output();
};

void Student::input()
{
    cout<<"\n Enter roll no :";
    cin>>roll;
    cout<<"\n Enter name: ";
    cin>>name;
}

void Student::output()
{
    cout<<"\n ROLL: "<<roll;
    cout<<"\n NAME: "<<name;
}

int main()
{   
    Student s1;
    Student s2;
    Student *s3 = new Student();

    cout<<"\n\nFill the data of s1";
    s1.input();

    cout<<"\n\nFill the data of s2";
    s2.input();

    cout<<"\n\nFill the data of s3";
    s3->input();

    cout<<"\nAll data saved.";
    s1.output();
    s2.output();
    s3->output();

    // Don't forget to deallocate the dynamically allocated memory
    delete s3;

    return 0;
}
