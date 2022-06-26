#include <iostream>
using namespace std;

class addition
{

int a, b, c, d,e ,f;

public:

void get()
{

cout << "enter the real and imaginary part of first complex number " << endl;

cin >> a >> b;

cout << "enter the real and imaginary part of second complex number " << endl;

cin >> c >> d;
}

void dis()
{

cout <<"the sum of two complex number is :"<<e<<" + "<<f<<"i"<<endl;

}
friend void add(addition &ad);

};
void add(addition &ad)
{

ad.e = ad.a + ad.c;
ad.f = ad.b + ad.d;
}

int main()
{
addition a1;

a1.get();
add(a1);

a1.dis();

return 0;

}
