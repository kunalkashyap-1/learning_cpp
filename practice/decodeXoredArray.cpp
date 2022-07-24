#include <bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> &encoded, int first){
    vector<int> arr;
    arr.push_back(first);
    int n=encoded.size();
    for (int i = 0; i < n; i++)
    {
        first^=encoded[i];
        arr.push_back(first);
    }
    return arr;
}

void display(vector<int>& arr){
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> encoded = {6,2,7,3};
    int first = 4;
    vector<int> ans=decode(encoded,first);
    display(ans);
    return (0);
}