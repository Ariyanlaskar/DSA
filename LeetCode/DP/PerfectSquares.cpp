#include <bits/stdc++.h>
using namespace std;
int numSquares(int n)
{
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int temp = INT_MAX;
        for (int j = 1; j * j <= i; j++)
        {
            temp = min(1 + dp[i - j * j], temp);
        }
        dp[i] = temp;
    }
    return dp[n];
}
// Input: n = 12
// Output: 3
// Explanation: 12 = 4 + 4 + 4.
abch