#include <bits/stdc++.h>
using namespace std;

bool powerOfFour(int n)
{
    if (n % 3 == 1)
    {
        return (n &= (n - 1)) ? false : true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << powerOfFour(n);
    return (0);
}