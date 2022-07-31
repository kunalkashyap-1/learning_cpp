#include <bits/stdc++.h>
#define int long long
using namespace std;

int fast(int a,int b, int c){
    int res=0;
    while(b){
        if(b&1) res+=a,res%=c;
        a<<=1,a%=c;
        b>>=1;
    }
    return res;
}

int32_t main()
{
    cout<<fast(2,10000,1e9+7)<<endl;
    return (0);
}