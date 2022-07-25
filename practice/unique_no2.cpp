#include <bits/stdc++.h>
using namespace std;

vector<int> unique_number(vector<int> &arr)
{
    int n = arr.size();
    int temp = 0;
    vector<int> unq;

    // XOR
    for (int i = 0; i < n; i++)
    {
        temp ^= arr[i];
    }

    int pos = 0;
    while ((temp & 1) == 0)
    {
        pos++;
        temp = temp >> 1;
    }

    // filter the numbers which have position at 1;
    int mask = (1 << pos);
    int seta = 0;
    int setb = 0;
    for (int j = 0; j < n; j++)
    {
        if ((arr[j] & mask) > 0)
        {
            seta = seta ^ arr[j];
        }
        else
        {
            setb = setb ^ arr[j];
        }
    }

    unq.push_back(seta);
    unq.push_back(setb);

    return unq;
}

int main()
{
    vector<int> arr = {3, 5, 4, 1, 6, 3, 5, 6, 4, 7};
    vector<int> some = unique_number(arr);
    for (int x : some)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}