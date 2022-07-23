#include <bits/stdc++.h>
using namespace std;

int powerOfTwo(int n)
{
    return (n = n & (n - 1)) ? false : true;
}

int main()
{
    int n;
    cin >> n;
    cout << powerOfTwo(n) << endl;
    return (0);
}