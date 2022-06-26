#include<iostream>
using namespace std;

int sum(int a, int b);//acceptable
//int sum(int a,int);//not acceptable
//int sum(int,int);//acceptable
int main(){
    int num1, num2;
    cout<<"enter first no."<<endl;
    cin>>num1;
    cout<<"enter second no."<<endl;
    cin>>num2;
    cout<<"the sum is:-"<<sum(num1, num2);
    //num1 and num2 are actual parameters
    return (0);
}
int sum(int a, int b){
    //formal parameters (a and b) will be taking values from actual parameters num1 and num2
    int c=a+b;
    return c;
}