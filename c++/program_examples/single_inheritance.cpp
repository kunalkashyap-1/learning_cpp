#include <bits/stdc++.h>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1(void)
{
    return data1;
}
int Base::getdata2(void)
{
    return data2;
}
class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived::process(void)
{
    data3 = data2 * getdata1;
}
void Derived::display()
{
    cout << "value of data1 is " << getdata1 << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data3 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();
    return (0);
}