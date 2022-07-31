#include <bits/stdc++.h>

using namespace std;

int binary_expo(int a, int b){
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
    cout<<binary_expo(3,6)<<endl;
    return (0);
}