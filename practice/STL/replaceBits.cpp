#include <bits/stdc++.h>
using namespace std;

void clearBitsInRange(long int &n, int i, int j)
{
    int maska = (-1 << (i+1));
    int maskb = (1 << j) - 1;
    int fmask = maska | maskb;
    n = n & fmask;
}

int replaceBits(long int &n, long int &m, int i, int j)
{
    clearBitsInRange(n, i, j);
    int mask = (m << j);
    return (n = n | mask);
}

int main()
{
    long int n = 15;
    long int m = 2;
    int i = 3, j = 1;
    cout << replaceBits(n, m, i, j) << endl;
    return (0);
}