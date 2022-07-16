#include <bits/stdc++.h>
using namespace std;
int mod = (1e9 + 7);
int dp[51][51][51];
int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
{
    memset(dp, -1, sizeof(dp));
    int ans = helper(m, n, maxMove, startRow, startColumn);
    return ans;
}
long helper(int m, int n, int Move, int i, int j)
{
    if (i < 0 || i >= m || j < 0 || j >= n)
    {
        return 1;
    }
    if (Move <= 0)
    {
        return 0;
    }
    if (dp[i][j][Move] != -1)
    {
        return dp[i][j][Move] % mod;
    }
    long count = (helper(m, n, Move - 1, i - 1, j) % mod + helper(m, n, Move - 1, i + 1, j) % mod + helper(m, n, Move - 1, i, j - 1) % mod + helper(m, n, Move - 1, i, j + 1) % mod) % mod;
    return dp[i][j][Move] = count;
}