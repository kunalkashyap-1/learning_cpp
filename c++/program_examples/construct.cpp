#include<iostream>

using namespace std;

class complex{
    int a, b;
    public:
    //creating a constructor
        complex(void);//constructor declaration-->it is automatically invoked whenever an object is created(called)
         void printdata(){
            cout<<"your number is "<< a <<" + "<<b<<" = "<<(a+b)<<endl;
        } 
};

complex :: complex(void)//this is a default constructor as it takes no parameters.
{
    a=10;
    b=0;
}

int main(){
    complex c;
    c.printdata();
    return(0);
}