#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod =1e9+7;

int binary_expo(int a, int b){
    int res=1;
    while(b){
        if(b&1){
            res*=a,res%=mod;
        }
        a*=a,a%=mod;
        b>>=1;
    }
    return res;
}

int32_t main()
{
    cout<<binary_expo(8,200)<<endl;
    return (0);
}