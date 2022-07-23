#include <bits/stdc++.h>
using namespace std;

int powerOfTwo(int n){
    return (n=n&(n-1))?-1:1;
}

int main()
{
    int n;
    cin>>n;
    cout<<powerOfTwo(n)<<endl;
    return (0);
}