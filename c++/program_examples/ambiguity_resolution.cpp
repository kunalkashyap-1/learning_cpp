#include<bits/stdc++.h>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"kasie ho"<<endl;
    }
};

class Base3{
    public:
    void greet(){
        cout<<"what up"<<endl;
    }
};

class Derived:public Base1,public Base2,public Base3{
    int a;
    public:
    void greet(){
        Base1::greet();
    }
};

int main(){
    Base1 base1obj;
    Base2 base2obj;
    Base3 base3obj;
    base1obj.greet();
    base2obj.greet();
    base3obj.greet();
    Derived d;
return (0);
}