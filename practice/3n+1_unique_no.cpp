#include <bits/stdc++.h>

using namespace std;

void updateSum(std::vector<int> &sumarr, int x)
{
    for (int i = 0; i < 32; i++)
    {
        int ith_bit = x & (1 << i);
        if (ith_bit)
        {
            sumarr[i]++;
        }
    }
}

int numFromBits(std::vector<int> &sumarr){
    int num=0;
    for (int i = 0; i < 32; i++)
    {
        num+=(sumarr[i]*(1<<i));
    }
    return num;
}

int uniqueNo(std::vector<int> &vec)
{
    std::vector<int> sumarr(32, 0); // fill constructor
    for (int x : vec)
    {
        updateSum(sumarr, x);
        for (int i = 0; i < 32; i++)
        {
            sumarr[i] = sumarr[i] % 3;
        }
    }
    return numFromBits(sumarr);
}

int main()
{
    std::vector<int> vec = {1, 3, 5, 4, 3, 1, 5, 5, 3, 1};
    std::cout<<uniqueNo(vec)<<std::endl;
    return (0);
}