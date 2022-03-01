#include <bits/stdc++.h>
using namespace std;
vector<int> countBits(int n)
{
    vector<int> dp(n + 1);
    if (n == 0)
    {
        return {0};
    }
    if (n == 1)
    {
        return {0, 1};
    }
    else if (n == 2)
    {
        return {0, 1, 1};
    }
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        int q = i % 2;
        int r = i / 2;
        dp[i] = dp[q] + dp[r];
    }
    return dp;
}
// Input: n = 2
// Output: [0,1,1]
