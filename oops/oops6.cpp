#include <iostream>
using namespace std;

class overload
{
int a;

public:
void get()

{

cout << "enter the element" << endl; cin >> a;

}
void operator++()
{

a = a + 10;
}
void dis()

{

cout << "element after overloading" << endl; cout << a << endl;

}
};
int main()

{
overload a1;
a1.get();

++a1;
a1.dis();
}
