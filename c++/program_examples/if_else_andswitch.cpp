#include<iostream>
using namespace std;

//selection structure
int main(){
    int age;
    cout<<"what is your age\n";
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"you are just a kid watch some caartoons will ya\n";
    }
    else if(age==18){
        cout<<"you are a kid, come in but don't drink stuffs\n";
    }
    else if(age>60){
        cout<<"who let you out of the old age house\n";
    }
    else if(age<1){
        cout<<"you are not even born dude who gave you a computer\n";
    }
    else{
        cout<<"you can come to the party vro\n";
    }
    switch (age)
    {
    case 18:
        cout<<"you are 18 get in\n";
        break;
    case 21:
        cout<<"hey you can drink come on in\n";
        break;

    default:
        cout<<"no special case\n";
        break;
    }
    return(0);
}