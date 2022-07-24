#include <bits/stdc++.h>
using namespace std;

int hamming_distance(int x,int y){
    int dis=0;
    while(x!=0 || y!=0)
    {
        if((x&1)!=(y&1)){
            dis++;
        }
        x=x>>1;
        y=y>>1;
    }
    return dis;
}

int main()
{
    int x = 5;
    int y = 7;
    cout<<hamming_distance(x,y)<<endl;
    return (0);
}