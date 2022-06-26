#include <bits/stdc++.h>
using namespace std;

/*
syntax for initialization list in constructor:
constructor(argument-list):initialization-section
{
    assignment and other code;
}
example
class test{
    int a;
    int b;
    public:
    Test(int i. intj): a(i),b(j){constructor body}
}
*/
class Test
{
    int a;
    int b;
    int sum;

public:
    Test(int i, int j) : a(i), b(j), sum(a + b)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
        cout << "the sum is " << sum << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
