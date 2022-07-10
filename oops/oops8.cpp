#include <iostream>

using namespace std;

template<class a>

a fun(a x, a y)
{
a res = x + y;

return res;
}

int main()
{
float a,b;

cout<< "enter two values in float"<< endl; cin>>a>>b;

cout<<"sum is : "<<fun(a,b)<<endl;

int e,f;

cout<< "enter two values in int"<< endl; cin>>e>>f;

cout<<"sum is : "<<fun(e,f)<<endl;
}
