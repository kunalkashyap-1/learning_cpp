#include<iostream>
using namespace std;

int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int factorial(int n){
    //recursion approach
    if (n<=1){
        return 1;
    }
    return(n*factorial(n-1));
}
int main(){
    /*facorial of a number
    6!=6*5*4*3*2*1 
    n!=n*(n-1) */
    int a;
    cout<<"enter a number for factorial";
    cin>>a;
    cout<<"factorial of "<<a<<"is "<<factorial(a)<<endl;
    cout<<fib(a);
    return(0);
}