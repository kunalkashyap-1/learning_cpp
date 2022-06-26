#include<iostream>

using namespace std;

template<class a>

class fun
{
private:

a x, y;
public:
void get()

{
cout<< "enter two values"<<endl;
cin>>x>>y;

}
void sum()
{

cout<<"sum is : "<<x+y<<endl;
}
};

int main()
{
fun<int> a1;

a1.get();
a1.sum();
fun<float> a2;

a2.get();
a2.sum();
}
