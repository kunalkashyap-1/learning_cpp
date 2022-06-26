#include<iostream>
using namespace std;

template <class t>
class someone{
    public:
    t data;
    someone(t a){
        data=a;
    }
    void display();
};

template<class t>
void someone<t>::display(){
    cout<<data;
}
int main(){
    someone<float> h(66.77);
    cout<<h.data<<endl;
    h.display();
    return (0);
}