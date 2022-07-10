#include<bits/stdc++.h>
using namespace std;

class Base{
    protected://it is a little like private but we can inherit it 
    int a;
    private://can't be inherited
    int b;
    public:
};

class Derived:protected Base{

};

int main(){
return (0);
}