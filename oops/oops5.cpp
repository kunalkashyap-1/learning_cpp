#include<iostream>

using namespace std;
class omi
{

int a;
public:
omi()

{
a = 10;
cout<< "constructor invoked"<<endl;

}
~omi()
{

cout<<"destructor invoked"<< endl;
}
};

int main()
{
omi a1;

return 0;
}
