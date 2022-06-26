#include<bits/stdc++.h>
using namespace std;

/*
case 1:
class b:public a{
    order ofexecution of construction -> first a() then b()
};
case 2:
class a: public b,public c{
    //order of execution of constructor ->first b()-->c()-->a//or order of declaration
}
case 3:
class a:public b,virtual public c{
    order of execution -> first c()-->b()-->a()
}
*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"base 1 class constructor called"<<endl;
    }
    void print_data1(){
        cout<<"the value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int j){
        data2=j;
        cout<<"base 2 class constructor called "<<endl;
    }
    void print_data2(){
        cout<<"the vlaue of data 2 is "<<data2<<endl;
    }
};

class Derived: public Base1,public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
        derived1=c;
        derived2=d;
        cout<<"derived class constructor is called "<<endl;
    }
    void print_dataD(){
        cout<<"the value of derived 1 and derived2 are "<<derived1<<" and "<<derived2<<endl;
    }
};

int main(){
    Derived h(1,2,3,4);
    h.print_data1();
    h.print_data2();
    h.print_dataD();
return (0);
}