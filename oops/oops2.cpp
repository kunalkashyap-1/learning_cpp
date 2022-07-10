#include <iostream>

using namespace std;
class simple
{

int a, r, n;
public:
void get()

{

cout << "enter the ammount" << endl; cin >> a;

cout << "enter the rate of intrest" << endl; cin >> r;

cout << "enter the time in months" << endl; cin >> n;

}
void dis()

{
float simp = (a * n * r) / (12 * 100);

cout << "you simple intrest is :" << simp << endl;

}
};
int main()

{
simple intrest;
intrest.get();

intrest.dis();
return 0;
}
