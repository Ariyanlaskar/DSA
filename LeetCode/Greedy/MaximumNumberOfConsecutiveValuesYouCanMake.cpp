#include <bits/stdc++.h>
using namespace std;
int getMaximumConsecutive(vector<int> &coins)
{
    int n = coins.size();
    int ans = 0;
    sort(coins.begin(), coins.end());
    for (int i = 0; i < n; i++)
    {
        if (coins[i] - ans > 1)
        {
            return ans + 1;
        }
        ans += coins[i];
    }
    return ans + 1;
}
// Input: coins = [1,1,1,4]
// Output: 8