#include<bits/stdc++.h>
using namespace std;


int main(){
    int p,r,t,si; 	
	cout<<" Enter the Principle: "<<endl;
	cin>>p;
	cout<<" Enter the Rate of Interest: "<<endl;
	cin>>r;
	cout<<" Enter the Time period: "<<endl;
	cin>>t;
	si=(p*r*t)/100;
	cout<<" The Simple interest for the amount "<<p<<" for "<<t<<" years at "<<r<<" % is: "<<si<<endl;
    return (0);
}