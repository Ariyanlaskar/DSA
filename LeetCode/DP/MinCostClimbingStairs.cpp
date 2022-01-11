#include <bits/stdc++.h>
using namespace std;
int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    int dp[n];
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
    }
    return min(dp[n - 2], dp[n - 1]);
}
// Input: cost = [10,15,20]
// Output: 15