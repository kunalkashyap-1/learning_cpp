#include <bits/stdc++.h>

using namespace std;

long long binary_expo(int a, int b){
    int res=1;
    while(b){
        if(b&1){
            res*=a;
        }
        a*=a;
        b>>=1;
    }
    return res;
}

int main()
{
    cout<<binary_expo(8,6)<<endl;
    return (0);
}