#include<iostream>
using namespace std;

//call by refrence using pointers
//void swappointer(int *a, int *b){
//    int temp=*a;
//    *a=*b;
//    *b=temp;
//}
//call by refrence using c++ refrence variable
void swaprefrencevar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=4, y=5;
    cout<<"this is the value of x"<<x<<"this is the value of y"<<y<<endl;
    //swappointer(&x , &y);
    //this will swap a and b using pointers
    //cout<<"this is the value of x after swap"<<x<<"this is the value of y apfter swap"<<y<<endl;
    //this will swap a and b using refrence variable
    swaprefrencevar(x, y);
    cout<<"this is the value of x by refrence variable"<<x<<"and y"<<y<<endl;
    return (0);
}