#include <bits/stdc++.h>
using namespace std;
int nthSuperUglyNumber(int n, vector<int> &primes)
{
    vector<int> pointers(primes.size());
    vector<int> dp(n + 1);
    for (int i = 0; i < pointers.size(); i++)
    {
        pointers[i] = 1;
    }
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int ans = INT_MAX;
        for (int j = 0; j < primes.size(); j++)
        {
            ans = min(ans, primes[j] * dp[pointers[j]]);
        }
        dp[i] = ans;
        for (int j = 0; j < primes.size(); j++)
        {
            if (primes[j] * dp[pointers[j]] == ans)
            {
                pointers[j]++;
            }
        }
    }
    return dp[n];
}
// Input: n = 12, primes = [2,7,13,19]
// Output: 32