#include<bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int var_base = 10;
    virtual void display()
    {
        cout << "display base class variable var_base " << var_base << endl;
    }
};
 
class DerivedClass : public BaseClass
{
public:
    int var_derived = 1;
    virtual void display()
    {
        cout << "display base class variable var_derived " << var_derived << endl;
    }
};


int main(){
    BaseClass *base_class_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_ptr=&obj_derived;
    base_class_ptr->display();
return (0);
}