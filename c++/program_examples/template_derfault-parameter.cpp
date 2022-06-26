#include<iostream>
using namespace std;

template<class t1=int,class t2=float>
class someone{
    public:
    t1 a;
    t2 b;
    someone(t1 x,t2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};

int main(){
    someone <> s1(4,6.4);
    s1.display();
    someone<char,int>s2('d',44);
    s2.display();
    return (0);
}