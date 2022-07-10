#include<iostream>
using namespace std;

inline int product(int a, int b){
    return (a*b);
}

float moneyreceived(int currentmoney, float factor=1.04){
    return (currentmoney*factor);
}
//int strlen(const char *p){
//    
//}
int main(){
    int a,b;
    cout<<"enter the numbers";
    cin>>a>>b;
    cout<<"\nthe product is:-"<<product(a,b);
    int money=100000;
    cout<<"\nif you have "<<money<<"rs in your bank account, you will recieve "<<moneyreceived(money)<<"after one year\n";
    cout<<"for vip if you have "<<money<<"rs in your bank accout, you will recive "<<moneyreceived(money, 1.10)<<"rs in 1 year";
    return(0);
}