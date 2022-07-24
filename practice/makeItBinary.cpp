#include <bits/stdc++.h>
using namespace std;

int convertIntoBinary(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int last_bit=(n&1);
        ans+=last_bit*pow;
        pow*=10;
        n=n>>1;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<convertIntoBinary(n);
    return (0);
}