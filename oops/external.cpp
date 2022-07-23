#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    char name[20], dept[20];
    long int mobile;
    int id;
    void set_id()
    {
        cout << "Enter id: ";
        cin >> id;
    }
};

// single inheritance
class Detail : public Employee
{
public:
    void details()
    {
        cout << "Enter the name of the employee: " << endl;
        cin >> name;
        cout << "Enter the department: " << endl;
        cin >> dept;
        cout << "Enter mobile number: " << endl;
        cin >> mobile;
    }
};

class Accounts
{
public:
    long int bp;
    float hra, da, tax, g_sal, tot_sal;

    void calc()
    {
        cout << "\nEnter the basic pay:" << endl;
        cin >> bp;               // basic pay
        hra = bp / 10;           // housing and rent allowance
        da = bp / 4;             // daily allowance
        tot_sal = bp + hra + da; // total salary
        tax = (tot_sal * 12) / 100;
        g_sal = tot_sal - tax; // gross salary
    }
};

// Multiple Inheritance
class project : public Detail, public Accounts
{
public:
    char desg[20], pro_name[20], pro_sta[20];
    void putdet()
    {
        cout << "\nEnter employee's designation: " << endl;
        cin >> desg;
        cout << "\n Enter the name of the project: " << endl;
        cin >> pro_name;
        cout << "\nEnter the project status: " << endl;
        cin >> pro_sta;
    }

    void display()
    {
        cout << "\nName of the employee: " << name;
        cout << "\nEmployee's Department: " << dept;
        cout << "\nEmployee's Mobile number: " << mobile;
        cout << "\n Basic Pay= " << bp;
        cout << "\nHRA= " << hra;
        cout << "\nDA= " << da;
        cout << "\nTAX deducted= " << tax;
        cout << "\nGross Salary= " << g_sal;
        cout << "\nProject detail" << endl;
        cout << "\nEmployee's ID" << id;
        cout << "\nEmployee's Designation: " << desg;
        cout << "\nEmployee's project name: " << pro_name;
        cout << "\nProject status: " << pro_sta;
    }
};

int main()
{
    project person;
    person.set_id();
    person.details();
    person.calc();
    person.putdet();
    person.display();

    return (0);
}