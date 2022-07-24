#include <bits/stdc++.h>
using namespace std;

int countBits(int n){
    int count = 0;
    while (n>0)
    {
        count += n&1;
        n=n>>1;
    }
    return count;
}

vector<int> sortByBits(vector<int> &arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans(15);
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        int c=countBits(arr[i]);
        ans[c].push_back(arr[i]);
    }

    for(int i=0;i<15;i++){
    for(auto x:ans[i]){
        temp.push_back(x);
    }
    }
    return temp;
}

void display(vector<int> &t){
    for(auto x: t){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {1024,512,256,128,64,32,16,8,4,2,1};
    vector<int> t=sortByBits(arr);
    display(t);
    return (0);
}