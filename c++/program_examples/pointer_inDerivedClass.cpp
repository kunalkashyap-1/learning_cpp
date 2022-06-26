#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int var_base = 10;
    void display()
    {
        cout << "display base class variable var_base " << var_base << endl;
    }
};
 
class DerivedClass : public BaseClass
{
public:
    int var_derived = 1;
    void display()
    {
        cout << "display base class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class
    base_class_pointer->var_base = 11;
    base_class_pointer->display();
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 69;
    derived_class_pointer->display();
    derived_class_pointer->var_base = 69;
    derived_class_pointer->display();
    return (0);
}