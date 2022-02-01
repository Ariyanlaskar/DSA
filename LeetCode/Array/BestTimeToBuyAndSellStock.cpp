#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int mn = prices[0];
    int ans = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        mn = min(mn, prices[i]);
        ans = max(ans, prices[i] - mn);
    }
    return ans;
}
// Input: prices = [7,1,5,3,6,4]
// Output: 5