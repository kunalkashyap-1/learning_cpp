#include <iostream>

using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "enter employee id " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the id of the employee is " << id << "and the employee nummber is" << count << endl;
    }
    static void getcount(){
    cout<<"the value of count is"<<count; 
}
};

int employee::count;

int main()
{
    employee harry, random, me;
//c ount is the static data member of the class employee
    harry.setdata();
    harry.getdata();
    employee::getcount();

    random.setdata();
    random.getdata();
    employee::getcount();

    me.setdata();
    me.getdata();
    employee::getcount();
    return (0);
}