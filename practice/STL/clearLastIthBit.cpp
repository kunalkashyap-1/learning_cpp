#include <bits/stdc++.h>
using namespace std;

int clearLastIthBit(int &n, int i)
{
    int mask = (-1<<i);
    return (n=n&mask);
}

int main()
{
    int n=13;
    int i;
    cin>>i; 
    cout<<clearLastIthBit(n,i)<<endl;
    return (0);
}