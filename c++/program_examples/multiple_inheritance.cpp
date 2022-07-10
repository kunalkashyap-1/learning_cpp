#include <bits/stdc++.h>
using namespace std;

/*class Derived:visibility-mode base1,visibilty-mode base2{
    class body of derived class
}--> syntax for inheriting in multiple inheritance*/

class Base1
{
protected:
    int base1;

public:
    void set_base1(int a)
    {
        base1 = a;
    }
};

class Base2
{
protected:
    int base2;

public:
    void set_base2(int b)
    {
        base2 = b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "the value of base1 is " << base1 << endl
             << "the balue of base2 is " << base2 << endl
             << "the sum of it is " << base1 + base2 << endl;
    }
};

int main()
{
    Derived sum;
    sum.set_base1(43);
    sum.set_base2(25);
    sum.show();
    return (0);
}