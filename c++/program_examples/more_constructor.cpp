#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int , int);//invokes automatically as and object is declared
    void print_number()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

Complex :: Complex(int x, int y){//parameterised constructor
    a=x;
    b=y;
}


int main()
{
    //implicit call
    Complex a(4,6);
    a.print_number();
    //explicit call
    Complex b = Complex(5,7);
    b.print_number();
    return 0;
}