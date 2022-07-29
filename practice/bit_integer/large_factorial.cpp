#include <bits/stdc++.h>

using namespace std;

void multiply(vector<int> &arr, int no, int &size)
{
    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int product = arr[i] * no + carry;
        arr[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        arr[size] = carry % 10;
        carry = carry / 10;
        size = size + 1;
    }
}

void bigfactorial(int n)
{
    vector<int> arr(1000, 0);
    arr[0] = 1;
    int size = 1;
    for (int i = 2; i <= n; i++)
    {
        multiply(arr, i, size);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    bigfactorial(n);
    return (0);
}