#include<iostream>

using namespace std;

class y;

class x{
    int data;
    public:
        void setvalue(int value){
            data = value;
        }
        friend void sum(x ,y);
};

class y{
    int num;
    public:
        void setvalue(int value){
            num=value;
        }
        friend void sum(x , y);
};

void sum(x o1, y o2){
    cout<<"the sum of object o1 and o2 is "<< o1.data + o2.num;
}

int main(){
    x a1;
    a1.setvalue(30);
    y b1;
    b1.setvalue(425);
    sum(a1, b1);
    return(0);
}