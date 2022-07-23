#include <bits/stdc++.h>
using namespace std;

void odd_even(int x){
    if(x&1)
    cout<<"odd"<<endl;
    else
    cout<<"even"<<endl;
}

int main()
{
    int x;
    cin>>x;
    odd_even(x);
    return (0);
}