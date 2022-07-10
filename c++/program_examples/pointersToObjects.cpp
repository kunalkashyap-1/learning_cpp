#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real,imaginary;
    public:
    void get_data(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
    void set_data(int a,int b){
        real =a;
        imaginary=b;
    }
};

int main(){
    Complex c1;
    // Complex *ptr=new Complex;
    // c1.set_data(1,54);
    // c1.get_data();
    // ptr->set_data(22,33);
    // ptr->get_data();
     Complex *ptr=new Complex[4];
    c1.set_data(1,54);
    c1.get_data();
    ptr->set_data(22,33);
    ptr->get_data();
    (ptr+1)->set_data(84,69);
    (ptr+1)->get_data();
return (0);
}