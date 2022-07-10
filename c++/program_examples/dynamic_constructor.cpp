#include <bits/stdc++.h>
using namespace std;

class BankDeposit
{
private:
    int principle, years;
    float interestrate,returnvalue; 
    public : 
    BankDeposit(){}
    BankDeposit(int p,int y,float r);
    BankDeposit(int p,int y, int r);
    void show();

};

BankDeposit::BankDeposit(int p, int y ,float r){
    principle=p;
    years=y;
    interestrate=r;

    returnvalue=principle;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+r);
    }
}

BankDeposit::BankDeposit(int p, int y ,int r){
    principle=p;
    years=y;
    interestrate=float (r)/100;

    returnvalue=principle;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}

void BankDeposit :: show(){
    cout<<endl<<"principal amount was "<<principle<<endl<<"return value after "<<years<<"is "<<returnvalue<<endl;
}

int main(){
    BankDeposit bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of p, y , r"<<endl;
    cin>>p>>y>>r;
    BankDeposit bd1(p,y,r);
    bd1.show();
    cout<<"enter the value of p, y , R"<<endl;
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.show();
    bd3.show();
    return 0;
}