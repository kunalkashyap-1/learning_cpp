#include<iostream>
using namespace std;

typedef struct employee
{
    int eid;
    float salary;
    char position;
}ep;

union money{
    int rice;
    char car;
    float pounds;
};
int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1= breakfast;
    cout<<m1; 
    //ep kunal;
    //ep random;
    //kunal.eid=101;
    //kunal.salary=50000;
    //kunal.position='ceo';
    //random.eid=102;
    //random.salary=5616.255556;
    //random.position='something';
    //cout<<"employee 1\n"<<kunal.eid<<endl<<kunal.salary<<endl<<kunal.position<<endl;
    //union money m1;
    //m1.rice=34;
    //m1.car='c';
    //cout<<m1.rice<<endl;
    //cout<<m1.car;
    return(0);
}