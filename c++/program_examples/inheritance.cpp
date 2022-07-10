#include <bits/stdc++.h>
using namespace std;
// base class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
};
// derived class syntax
// class {{derived class name}} : {{visibility mode}} {{base class name}}
//{
//     class member / method /etc
// }
// 1. default visibility mode is private
/*2.private visibility mode: public members of the base class becomes private embers of derived class
3.public visibility mode : public members of the base class becomes private members of the derived class
4.private members are never inherited*/
class Programmer :public Employee
{
public:
    int languagecode = 9;
    Programmer(int inpid)
    {
        id = inpid;
    }
};

int main()
{
    Employee h(1), r(2);
    cout << h.salary << endl;
    cout << r.salary << endl;
    Programmer skillf(1);
    cout << skillf.languagecode;
    return (0);
}