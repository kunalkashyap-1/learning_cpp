#include <iostream>

using namespace std;

class addition

{
int a, b;

public:
void get()
{

cout << "enter the real and imaginary part of first complex number " << endl;

cin >> a >> b;

}
void dis()
{

cout << "the sum of two complex number is :" << a << " + " << b << "i" << endl;

}

friend addition operator+(addition &ad, addition &ad2);
};
addition operator+(addition &ad, addition &ad2)

{
addition ad3;
ad3.a = ad.a + ad2.a;

ad3.b = ad.b + ad2.b;
return ad3;
}

int main()
{
addition a1, a2, a3;

a1.get();
a2.get();
a3 = a1 + a2;
 
a3.dis();
}
