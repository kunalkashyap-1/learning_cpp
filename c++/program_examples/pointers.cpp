#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    cout<<"address of a\n"<<&a<<endl;
    cout<<"address of a\n"<<b<<endl;
    //&--->adress of operator
    cout<<"the value of address b\n"<<*b;
    //*---->value at address--->derefrence variable
    return(0);
}