#include <bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>> &accounts)
{
    int n = accounts.size();
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int amount = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            amount += accounts[i][j];
        }
        ans = max(ans, amount);
    }
    return ans;
}