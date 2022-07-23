#include <bits/stdc++.h>
using namespace std;

int setIthBit(int &n,int i){
    int mask=(1<<i);
    return (n=n|mask);
}

int main()
{
    int n=5;
    int i;
    cin>>i;
    cout<<setIthBit(n,i)<<endl;
    return (0);
}