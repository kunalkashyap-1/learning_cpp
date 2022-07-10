#include <iostream>

using std::string;
using namespace std;

class empolyee
{
string name;

string department;
int emp_id;
public:

void get()
{

cout<< "enter the employee name" <<endl; cin>> name;

cout<< "enter the department"<<endl; cin>> department;

cout<< "enter the empolyee id"<<endl; cin>> emp_id;

}

void dis()
{

cout <<"empolyee name :"<< name<<endl; cout <<"department :"<< department<<endl; cout <<"employee id :"<< emp_id<<endl;
}

};

int main()

{
empolyee a1;
a1.get();

a1.dis();
}
