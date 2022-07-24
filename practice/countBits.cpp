#include <bits/stdc++.h>
using namespace std;

//counts the number of set bits i.e bit with value 1
int countBits(int n){
    int count = 0;
    while (n>0)
    {
        count += n&1;
        n=n>>1;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<countBits(n)<<endl;
    return (0);
}