#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(int x,int y){
            a=x;
            b=y;
        }

        Complex(int x){
            a=x;
            b=0;
        }
        void print(){
            cout<<"your number is "<<a<<"+"<<b<<"i"<<endl; 
        }
};

int main(){
    Complex a(4,6);
    Complex b(4);
    a.print();
    b.print();
    return 0;
}