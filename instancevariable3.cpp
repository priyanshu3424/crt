#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int Employee_id;
    string Employee_designation;
    string Company_name;
    static int cm;

public:
    Employee(int id, const string& designation, const string& company)
    {
        Employee_id = id;
        Employee_designation = designation;
        Company_name = company;
    }

    void display()
    {
        cout << "Employee ID: " << Employee_id << endl;
        cout << "Employee Designation: " << Employee_designation << endl;
        cout << "Company Name: " << Company_name << endl;
        cout << "Company ID: " << cm << endl;
    }
};

int Employee::cm = 7500;

int main()
{
    Employee e1(101, "Karigar", "meri company");
    Employee e2(104, "Majdoor", "apni company");
    Employee e3(108, "Berozgar", "aapki company");

    e1.display();

    return 0;
}
