#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const int a=35;
    cout<<"for constant value of a"<<a<<endl;

    cout<<"these are for maipulators";
    int b=546, c=5684 ,d=45;
    cout<<"the value of the variables are"<<endl<<setw(4)<<a<<endl<<setw(4)<<b<<endl<<setw(4)<<c<<endl<<setw(4)<<d<<endl;
    //precedence is which operator will evaluate first and associativity is direction of parsing (left to right or right to left)
    cout<<"operator precidence"<<endl;
    int e=(((c*a)+b)-d);
    cout<<e;
    return(0);
}