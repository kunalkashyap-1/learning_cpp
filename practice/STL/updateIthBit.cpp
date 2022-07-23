#include <bits/stdc++.h>
using namespace std;

int updateIthBit(int &n,int i,int v){
    int cmask=~(1<<i);
    n=n&cmask;
    int vmask=(v<<i);
    return (n=n|vmask);
    
}

int main()
{
    int n=5;
    int i;
    cin>>i;
    int v;
    cin>>v;
    cout<<updateIthBit(n,i,v)<<endl;
    return (0);
}