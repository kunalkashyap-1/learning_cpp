#include<bits/stdc++.h>
using namespace std;

class Number{
    int a;
    public:
    Number(){}
    Number(int num){
        a=num;
    }
    //when no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }

    void display(){
        cout<<"the number for this object is "<<a<<endl;
    }
};
int main(){
    Number x(10),y,z(45);
    z.display();
    y.display();
    x.display();
    Number z1(x);
    z1.display();
return (0);
}