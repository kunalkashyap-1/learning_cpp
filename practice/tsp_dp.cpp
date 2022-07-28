#include <bits/stdc++.h>

using namespace std;

int tsp(vector<vector<int>> dist, int setOfCities, int city, int n,vector<vector<int>> &dp)
{
    // base case
    if (setOfCities == (1 << n) - 1)
    {
        // return the cost from the current city to the original city
        return dist[city][0];
    }
    if(dp[setOfCities][city]!=-1){
        return dp[setOfCities][city];
    }
    int ans = INT_MAX;
    // otherwise try all possible options
    for (int choice = 0; choice < n; choice++)
    { // checking if the city is visited or not
        if (setOfCities & (1 << choice) == 0)
        {
            int subprob = dist[city][choice] + tsp(dist, setOfCities | (1 << choice), choice, n,dp);
            ans = min(ans, subprob);
        }
    }
    dp[setOfCities][city]=ans;
    return ans;
}

int main()
{
    vector<vector<int>> dist = {
        {0, 20, 42, 25},
        {20, 0, 30, 34},
        {42, 30, 0, 10},
        {25, 34, 10, 0}};
    int n = 4;
    vector<vector<int>> dp(1 << n, vector<int>(n, -1));
    cout << tsp(dist, 1, 0, n,dp) << endl;
    return (0);
}