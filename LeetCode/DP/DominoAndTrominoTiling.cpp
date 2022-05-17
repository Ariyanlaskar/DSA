#include <bits/stdc++.h>
using namespace std;
int numTilings(int n)
{
    int mod = 1e9 + 7;
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }
    if (n == 3)
    {
        return 5;
    }
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 5;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = ((2 * dp[i - 1]) % mod + dp[i - 3]) % mod;
    }
    return dp[n];
}
// Input: n = 3
// Output: 5