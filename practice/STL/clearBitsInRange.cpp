#include <bits/stdc++.h>
using namespace std;

int clearBitsInRange(int n,int i,int j){
    int maska=(-1<<i);
    int maskb=(1<<j)-1;
    int fmask=maska|maskb;
    return (n=n&fmask);
}

int main()
{
    int n=15;
    int i,j;
    cin>>i>>j;
    cout<<clearBitsInRange(n,i,j)<<endl;
    return (0);
}