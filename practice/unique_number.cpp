#include <bits/stdc++.h>
using namespace std;

int unique_number(vector<int> &arr)
{
    int n = arr.size();
    int unq = 0;
    for (int i = 0; i < n; i++)
    {
        unq ^= arr[i];
    }
    return unq;
}

int main()
{
    vector<int> arr = {3, 5, 4, 1, 6, 3, 5, 6, 4};
    cout << unique_number(arr) << endl;
    return (0);
}